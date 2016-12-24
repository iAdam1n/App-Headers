/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString, NSURL, NSArray, FBMemFeedStory;

@interface FBNativeArticleIntentTarget : FBIntentTarget {

	NSString* _graphQLID;
	NSURL* _canonicalURL;

}

@property (nonatomic,copy,readonly) NSString * featuredElementID; 
@property (nonatomic,copy,readonly) NSArray * featuredArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * featuredArticleCanonicalURLs; 
@property (nonatomic,readonly) FBMemFeedStory * feedStory; 
@property (nonatomic,copy,readonly) NSString * graphQLID;                                //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * canonicalURL;                                //@synthesize canonicalURL=_canonicalURL - In the implementation block
+(id)nativeArticleTargetWithGraphQLID:(id)arg1 canonicalURL:(id)arg2 ;
+(id)nativeArticleTargetWithGraphQLID:(id)arg1 canonicalURL:(id)arg2 featuredElementID:(id)arg3 featuredArticleIDs:(id)arg4 featuredArticleCanonicalURLs:(id)arg5 feedStory:(id)arg6 ;
+(id)nativeArticleTargetWithInstantArticle:(id)arg1 ;
+(id)nativeArticleTargetWithExternalURL:(id)arg1 ;
-(NSString *)graphQLID;
-(FBMemFeedStory *)feedStory;
-(id)fallbackURLs;
-(NSString *)featuredElementID;
-(NSArray *)featuredArticleIDs;
-(NSArray *)featuredArticleCanonicalURLs;
-(id)initWithGraphQLID:(id)arg1 canonicalURL:(id)arg2 featuredElementID:(id)arg3 featuredArticleIDs:(id)arg4 featuredArticleCanonicalURLs:(id)arg5 feedStory:(id)arg6 ;
-(id)initWithGraphQLID:(id)arg1 canonicalURL:(id)arg2 ;
-(id)description;
-(NSURL *)canonicalURL;
@end
