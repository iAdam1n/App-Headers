/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBSyncPersonRegularTypeProperties : FBValueObject <NSCopying> {

	BOOL _canInstallMessenger;
	BOOL _isMemorialized;
	BOOL _isPartial;
	BOOL _hasMessenger;
	BOOL _isFriend;
	long long _viewerConnectionStatus;

}

@property (nonatomic,readonly) BOOL canInstallMessenger;                      //@synthesize canInstallMessenger=_canInstallMessenger - In the implementation block
@property (nonatomic,readonly) BOOL isMemorialized;                           //@synthesize isMemorialized=_isMemorialized - In the implementation block
@property (nonatomic,readonly) BOOL isPartial;                                //@synthesize isPartial=_isPartial - In the implementation block
@property (nonatomic,readonly) BOOL hasMessenger;                             //@synthesize hasMessenger=_hasMessenger - In the implementation block
@property (nonatomic,readonly) BOOL isFriend;                                 //@synthesize isFriend=_isFriend - In the implementation block
@property (nonatomic,readonly) long long viewerConnectionStatus;              //@synthesize viewerConnectionStatus=_viewerConnectionStatus - In the implementation block
-(BOOL)isMemorialized;
-(long long)viewerConnectionStatus;
-(BOOL)hasMessenger;
-(id)initWithCanInstallMessenger:(BOOL)arg1 isMemorialized:(BOOL)arg2 isPartial:(BOOL)arg3 hasMessenger:(BOOL)arg4 isFriend:(BOOL)arg5 viewerConnectionStatus:(long long)arg6 ;
-(BOOL)canInstallMessenger;
-(BOOL)isPartial;
-(BOOL)isFriend;
@end
