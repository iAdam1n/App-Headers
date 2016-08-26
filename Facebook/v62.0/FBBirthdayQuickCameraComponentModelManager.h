/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCameraComponentModelManager.h>
#import <Facebook/FBCameraComponentModelManagerInternal.h>

@class FBBirthdayQuickCameraComponentModel, CKComponentHostingView, FBCaptureManager, FBCaptureManagerFilterHandler, FBCameraComponentModelChangedListenerAnnouncer, FBCameraComponentModel;

@interface FBBirthdayQuickCameraComponentModelManager : NSObject <FBCameraComponentModelManager, FBCameraComponentModelManagerInternal> {

	FBBirthdayQuickCameraComponentModel* _birthdayQuickCameraModel;
	CKComponentHostingView* _componentHostingView;
	FBCaptureManager* _captureManager;
	FBCaptureManagerFilterHandler* _filterHandler;
	FBCameraComponentModelChangedListenerAnnouncer* _modelChangedAnnouncer;

}

@property (nonatomic,retain) FBCameraComponentModelChangedListenerAnnouncer * modelChangedAnnouncer;              //@synthesize modelChangedAnnouncer=_modelChangedAnnouncer - In the implementation block
@property (nonatomic,retain) FBCameraComponentModel * baseCameraModel; 
@property (nonatomic,retain) FBCaptureManager * captureManager;                                                   //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) FBCaptureManagerFilterHandler * filterHandler;                                       //@synthesize filterHandler=_filterHandler - In the implementation block
-(void)setBaseCameraModel:(FBCameraComponentModel *)arg1 ;
-(FBCameraComponentModel *)baseCameraModel;
-(FBCameraComponentModelChangedListenerAnnouncer *)modelChangedAnnouncer;
-(void)setModelChangedAnnouncer:(FBCameraComponentModelChangedListenerAnnouncer *)arg1 ;
-(FBCaptureManager *)captureManager;
-(void)setCaptureManager:(FBCaptureManager *)arg1 ;
-(FBCaptureManagerFilterHandler *)filterHandler;
-(void)setFilterHandler:(FBCaptureManagerFilterHandler *)arg1 ;
-(void)setComponentHostingView:(id)arg1 ;
-(id)initWithBirthdayQuickCameraModel:(id)arg1 ;
@end
