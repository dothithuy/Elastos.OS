
#ifndef __ELASTOS_DROID_CONTACTS_COMMON_LIST_DIRECTORYLISTLOADER_H__
#define __ELASTOS_DROID_CONTACTS_COMMON_LIST_DIRECTORYLISTLOADER_H__

#include "elastos/droid/content/AsyncTaskLoader.h"
#include "elastos/droid/database/ContentObserver.h"

using Elastos::Droid::Content::AsyncTaskLoader;
using Elastos::Droid::Database::ContentObserver;
using Elastos::Droid::Database::IMatrixCursor;
using Elastos::Droid::Net::IUri;

namespace Elastos {
namespace Droid {
namespace Contacts {
namespace Common {
namespace List {

/**
 * A specialized loader for the list of directories, see {@link Directory}.
 */
class DirectoryListLoader
    : public AsyncTaskLoader
{
private:
    class DirectoryQuery
    {
    public:
        static const AutoPtr<IUri> URI;
        static const String ORDER_BY;

        static const AutoPtr<ArrayOf<String> > PROJECTION;

        static const Int32 ID = 0;
        static const Int32 PACKAGE_NAME = 1;
        static const Int32 TYPE_RESOURCE_ID = 2;
        static const Int32 DISPLAY_NAME = 3;
        static const Int32 PHOTO_SUPPORT = 4;
    };

    class MyObserver : public ContentObserver
    {
    public:
        TO_STRING_IMPL("DirectoryListLoader::MyObserver")

        MyObserver(
            /* [in] */ DirectoryListLoader* host)
            : mHost(host)
        {}

        // @Override
        CARAPI OnChange(
            /* [in] */ Boolean selfChange);

    private:
        DirectoryListLoader* mHost;
    };

public:
    DirectoryListLoader(
        /* [in] */ IContext* ctx);

    CARAPI_(void) SetDirectorySearchMode(
        /* [in] */ Int32 mode);

    /**
     * A flag that indicates whether the {@link Directory#LOCAL_INVISIBLE} directory should
     * be included in the results.
     */
    CARAPI_(void) SetLocalInvisibleDirectoryEnabled(
        /* [in] */ Boolean flag);

    // @Override
    CARAPI LoadInBackground(
        /* [out] */ IInterface** cursor);

protected:
    // @Override
    CARAPI OnStartLoading();

    // @Override
    CARAPI OnStopLoading();

    // @Override
    CARAPI OnReset();

private:
    CARAPI_(AutoPtr<ICursor>) GetDefaultDirectories();

public:
    static const Int32 SEARCH_MODE_NONE = 0;
    static const Int32 SEARCH_MODE_DEFAULT = 1;
    static const Int32 SEARCH_MODE_CONTACT_SHORTCUT = 2;
    static const Int32 SEARCH_MODE_DATA_SHORTCUT = 3;

    // This is a virtual column created for a MatrixCursor.
    static const String DIRECTORY_TYPE;

private:
    static const String TAG;

    static const AutoPtr<ArrayOf<String> > RESULT_PROJECTION;

    AutoPtr<IContentObserver> mObserver;

    Int32 mDirectorySearchMode;
    Boolean mLocalInvisibleDirectoryEnabled;

    AutoPtr<IMatrixCursor> mDefaultDirectoryList;
};

} // List
} // Common
} // Contacts
} // Apps
} // Elastos

#endif //__ELASTOS_DROID_CONTACTS_COMMON_LIST_DIRECTORYLISTLOADER_H__
