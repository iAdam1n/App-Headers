/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCameraPermissionsEducationPresenter.h>

@protocol FBCameraPermissionsEducationPresenterDelegate;
@class NSString;

@interface FBInspirationNUXCameraPermissionsEducationPresenter : NSObject <FBCameraPermissionsEducationPresenter> {

	id<FBCameraPermissionsEducationPresenterDelegate> _delegate;
	unsigned long long _requiredPermissions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBCameraPermissionsEducationPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long requiredPermissions;                                         //@synthesize requiredPermissions=_requiredPermissions - In the implementation block
@property (nonatomic,readonly) BOOL canPresent; 
-(unsigned long long)requiredPermissions;
-(void)setRequiredPermissions:(unsigned long long)arg1 ;
-(BOOL)canPresent;
-(void)setDelegate:(id<FBCameraPermissionsEducationPresenterDelegate>)arg1 ;
-(id<FBCameraPermissionsEducationPresenterDelegate>)delegate;
-(void)present;
@end
