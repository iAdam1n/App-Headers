/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBPageNewLikeItem : FBValueObject <NSCopying> {

	BOOL _isNewLiker;
	NSString* _graphQLId;
	NSString* _name;
	NSURL* _profilePictureURL;

}

@property (nonatomic,copy,readonly) NSString * graphQLId;                   //@synthesize graphQLId=_graphQLId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSURL * profilePictureURL;              //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
@property (nonatomic,readonly) BOOL isNewLiker;                             //@synthesize isNewLiker=_isNewLiker - In the implementation block
-(NSString *)graphQLId;
-(NSURL *)profilePictureURL;
-(BOOL)isNewLiker;
-(id)initWithGraphQLId:(id)arg1 name:(id)arg2 profilePictureURL:(id)arg3 isNewLiker:(BOOL)arg4 ;
-(NSString *)name;
@end
