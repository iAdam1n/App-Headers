/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBComposerDraftRecoveryAssetLibraryLoader;

@interface FBComposerDraftRecoveryBootstrapContentSanitizer : NSObject {

	FBUserSession* _session;
	FBComposerDraftRecoveryAssetLibraryLoader* _assetLibraryLoader;

}
-(void)sanitizeSavedBootstrapContent:(id)arg1 validBootstrapContentBlock:(/*^block*/id)arg2 noValidBootstrapContentBlock:(/*^block*/id)arg3 ;
-(void)_sanitizeBootstrapContentAfterSanitizingAttachments:(id)arg1 validBootstrapContentBlock:(/*^block*/id)arg2 ;
-(void)_sanitizeAttachments:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_initAssetLibraryIfNeededForAttachments:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end
