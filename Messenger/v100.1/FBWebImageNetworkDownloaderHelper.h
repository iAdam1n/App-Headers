/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebImageNetworkDownloaderHelperDelegate;
@class NSMutableDictionary, FBWebImageNetworkSpecifier;

@interface FBWebImageNetworkDownloaderHelper : NSObject {

	id<FBWebImageNetworkDownloaderHelperDelegate> _delegate;
	NSMutableDictionary* _downloads;
	FBWebImageNetworkSpecifier* _specifier;

}
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 analyticsTags:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(void)_cancelDownloadsForNewSpecifier:(id)arg1 ;
-(id)_sortNodesByDescImageFlag:(id)arg1 ;
-(void)_cancelDownloadForNode:(id)arg1 ;
-(void)handleDownloadProgress:(double)arg1 forDownloadNode:(id)arg2 queue:(id)arg3 ;
-(void)handleDownloadResponse:(id)arg1 forDownloadNode:(id)arg2 specifier:(id)arg3 finished:(BOOL)arg4 queue:(id)arg5 ;
-(void)cancel;
-(id)initWithDelegate:(id)arg1 ;
@end
