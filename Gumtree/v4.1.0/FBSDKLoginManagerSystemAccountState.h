/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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

