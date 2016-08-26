/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMMontageAudience, FBMMontageThreadPropertiesFetchStatus;

@interface FBMMontageThreadProperties : FBValueObject <NSCoding, NSCopying> {

	NSString* _fbId;
	NSString* _montageAuthorFbId;
	FBMMontageAudience* _montageAudience;
	FBMMontageThreadPropertiesFetchStatus* _fetchStatus;

}

@property (nonatomic,copy,readonly) NSString * fbId;                                                  //@synthesize fbId=_fbId - In the implementation block
@property (nonatomic,copy,readonly) NSString * montageAuthorFbId;                                     //@synthesize montageAuthorFbId=_montageAuthorFbId - In the implementation block
@property (nonatomic,copy,readonly) FBMMontageAudience * montageAudience;                             //@synthesize montageAudience=_montageAudience - In the implementation block
@property (nonatomic,copy,readonly) FBMMontageThreadPropertiesFetchStatus * fetchStatus;              //@synthesize fetchStatus=_fetchStatus - In the implementation block
-(FBMMontageThreadPropertiesFetchStatus *)fetchStatus;
-(NSString *)fbId;
-(NSString *)montageAuthorFbId;
-(id)initWithFbId:(id)arg1 montageAuthorFbId:(id)arg2 montageAudience:(id)arg3 fetchStatus:(id)arg4 ;
-(FBMMontageAudience *)montageAudience;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
