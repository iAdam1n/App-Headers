/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCameraComponentModelManager.h>
#import <Facebook/FBCameraComponentModelManagerInternal.h>

@class FBCameraComponentModel, FBCameraComponentModelChangedListenerAnnouncer, FBCaptureManager, FBCaptureManagerFilterHandler, CKComponentHostingView, FBBackstageCameraComponentModel;

@interface FBBackstageCameraComponentModelManager : NSObject <FBCameraComponentModelManager, FBCameraComponentModelManagerInternal> {

	CKComponentHostingView* _componentHostingView;
	FBCaptureManager* _captureManager;
	FBCaptureManagerFilterHandler* _filterHandler;
	FBBackstageCameraComponentModel* _backstageCameraModel;
	FBCameraComponentModelChangedListenerAnnouncer* _modelChangedAnnouncer;

}

@property (nonatomic,retain) FBBackstageCameraComponentModel * backstageCameraModel;                              //@synthesize backstageCameraModel=_backstageCameraModel - In the implementation block
@property (nonatomic,retain) FBCameraComponentModel * baseCameraModel; 
@property (nonatomic,retain) FBCameraComponentModelChangedListenerAnnouncer * modelChangedAnnouncer;              //@synthesize modelChangedAnnouncer=_modelChangedAnnouncer - In the implementation block
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
-(id)initWithBackstageCameraModel:(id)arg1 ;
-(FBBackstageCameraComponentModel *)backstageCameraModel;
-(void)setComponentHostingView:(id)arg1 ;
-(void)setBackstageCameraModel:(FBBackstageCameraComponentModel *)arg1 ;
@end
