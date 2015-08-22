/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBMediaPickerBaseTraits.h>

@class FBUserSession;

@interface FBMediaPickerForProfileTraits : FBMediaPickerBaseTraits {

	FBUserSession* _session;
	BOOL _unifiedMediaGalleryEnabled;

}
+(id)traitsWithSession:(id)arg1 isUnifiedMediaGalleryEnabled:(BOOL)arg2 ;
-(unsigned long long)maxPhotosSelected;
-(BOOL)tapToBringUpGalleryView;
-(BOOL)unifiedMediaGalleryEnabled;
-(unsigned long long)postSelectionAction;
-(id)initWithSession:(id)arg1 isUnifiedMediaGalleryEnabled:(BOOL)arg2 ;
-(BOOL)allowTagging;
-(BOOL)allowFaceDetection;
-(BOOL)requireSquarePhoto;
-(BOOL)autoNavigationEnabled;
-(unsigned long long)initialToolForMediaGallery;
-(id)init;
@end
