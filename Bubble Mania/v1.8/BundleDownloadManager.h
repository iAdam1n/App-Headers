/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DownloadBundleDelegate;
@class NSMutableDictionary;

@interface BundleDownloadManager : NSObject {

	id<DownloadBundleDelegate> _downloadBundleDelegate;
	NSMutableDictionary* _downloadedBundles;

}

@property (assign,nonatomic) id<DownloadBundleDelegate> downloadBundleDelegate;              //@synthesize downloadBundleDelegate=_downloadBundleDelegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadedBundles;                        //@synthesize downloadedBundles=_downloadedBundles - In the implementation block
+(id)instance;
-(void)downloadComplete:(id)arg1 ;
-(void)loadFile:(id)arg1 fromBundle:(id)arg2 delegate:(id)arg3 ;
-(void)downloadBundles;
-(id)bundleUrl:(id)arg1 ;
-(NSMutableDictionary *)downloadedBundles;
-(void)addBundleToSavedFiles:(id)arg1 ;
-(id<DownloadBundleDelegate>)downloadBundleDelegate;
-(BOOL)hasBundle:(id)arg1 ;
-(void)downloadBundle:(id)arg1 ;
-(id)bundleNamed:(id)arg1 ;
-(id)bundledFileNames:(id)arg1 ;
-(void)loadFile:(id)arg1 fromBundle:(id)arg2 delegate:(id)arg3 delegateData:(id)arg4 ;
-(void)deleteBundle:(id)arg1 ;
-(id)bundleArchivePath:(id)arg1 ;
-(BOOL)isPackageCompleted:(id)arg1 ;
-(void)setDownloadBundleDelegate:(id<DownloadBundleDelegate>)arg1 ;
-(void)setDownloadedBundles:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

