/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString, NSURL;

@interface FBNoteIntentTarget : FBIntentTarget {

	NSString* _graphQLID;
	NSURL* _fallbackURL;

}

@property (nonatomic,copy,readonly) NSString * graphQLID;              //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fallbackURL;               //@synthesize fallbackURL=_fallbackURL - In the implementation block
+(id)noteTargetWithGraphQLID:(id)arg1 fallbackURL:(id)arg2 ;
+(id)noteTargetWithNote:(id)arg1 ;
-(NSString *)graphQLID;
-(id)fallbackURLs;
-(id)initWithGraphQLID:(id)arg1 fallbackURL:(id)arg2 ;
-(NSURL *)fallbackURL;
@end
