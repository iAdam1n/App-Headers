/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMMontageThreadPropertiesFetchStatus : FBValueObject <NSCoding, NSCopying> {

	BOOL _hasFetchedFbId;
	BOOL _hasFetchedMontageAuthorFbId;
	BOOL _hasFetchedMontageAudience;

}

@property (nonatomic,readonly) BOOL hasFetchedFbId;                           //@synthesize hasFetchedFbId=_hasFetchedFbId - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedMontageAuthorFbId;              //@synthesize hasFetchedMontageAuthorFbId=_hasFetchedMontageAuthorFbId - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchedMontageAudience;                //@synthesize hasFetchedMontageAudience=_hasFetchedMontageAudience - In the implementation block
-(BOOL)hasFetchedFbId;
-(id)initWithHasFetchedFbId:(BOOL)arg1 hasFetchedMontageAuthorFbId:(BOOL)arg2 hasFetchedMontageAudience:(BOOL)arg3 ;
-(BOOL)hasFetchedMontageAuthorFbId;
-(BOOL)hasFetchedMontageAudience;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
