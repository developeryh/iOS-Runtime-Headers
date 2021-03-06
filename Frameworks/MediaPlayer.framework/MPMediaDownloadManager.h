/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaDownloadManager : NSObject <ATDownloadProgressObserver, MPStoreDownloadManagerObserver, NSXPCListenerDelegate> {
    NSXPCConnection * __downloadProgressConnection;
    NSXPCConnection * __keepLocalTaskConnection;
    NSMutableDictionary * _cachedATAssetMap;
    NSMutableArray * _cachedATDownloads;
    NSMutableOrderedSet * _cachedATUnEnqueuedDownloads;
    BOOL  _callerCanConnectToAirTraffic;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSHashTable * _downloadObservers;
    BOOL  _prefetchATAssets;
    NSObject<OS_dispatch_queue> * _queue;
    MPStoreDownloadManager * _storeDownloadManager;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (nonatomic, readonly) NSArray *allMediaDownloadLibraryIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_cachedATAssets;
- (void)_checkEntitlementToConnectToAirTraffic;
- (id)_downloadProgressConnection;
- (id)_init;
- (id)_keepLocalTaskConnection;
- (void)_prefectchAllATDownloads;
- (id)_statusChangeObservers;
- (id)_storeDownloadForATAsset:(id)arg1 withIdentifier:(long long)arg2;
- (void)addObserver:(id)arg1;
- (id)allMediaDownloadLibraryIdentifiers;
- (void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2;
- (void)atcDidEnqueueAsset:(id)arg1;
- (void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2;
- (void)atcWillEnqueueDownloads:(id)arg1 cancelDownloads:(id)arg2;
- (void)cancelDownloads:(id)arg1;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)enqueueAssetForDownload:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (BOOL)hasActiveDownloads;
- (id)init;
- (void)prioritizeDownload:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)sendKeepLocalStatusChanged:(int)arg1 forLibraryIdentifier:(long long)arg2 entityType:(int)arg3 withCompletionHandler:(id /* block */)arg4;

@end
