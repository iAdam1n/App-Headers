/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSDKLoginManagerSystemAccountState : NSObject {

	BOOL _didShowDialog;
	BOOL _reauthorize;
	BOOL _unTOSedDevice;

}

@property (assign,nonatomic) BOOL didShowDialog;                                     //@synthesize didShowDialog=_didShowDialog - In the implementation block
@property (assign,getter=isReauthorize,nonatomic) BOOL reauthorize;                  //@synthesize reauthorize=_reauthorize - In the implementation block
@property (assign,getter=isUnTOSedDevice,nonatomic) BOOL unTOSedDevice;              //@synthesize unTOSedDevice=_unTOSedDevice - In the implementation block
-(void)setDidShowDialog:(BOOL)arg1 ;
-(void)setReauthorize:(BOOL)arg1 ;
-(void)setUnTOSedDevice:(BOOL)arg1 ;
-(BOOL)isReauthorize;
-(BOOL)isUnTOSedDevice;
-(BOOL)didShowDialog;
@end
