/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSURL, NSString;

@interface FBNativeArticleIntentTarget : FBIntentTarget {

	NSURL* _canonicalURL;
	NSString* _graphQLID;

}

@property (nonatomic,copy,readonly) NSURL * canonicalURL;              //@synthesize canonicalURL=_canonicalURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphQLID;              //@synthesize graphQLID=_graphQLID - In the implementation block
+(id)nativeArticleTargetWithGraphQLID:(id)arg1 canonicalURL:(id)arg2 ;
-(NSString *)graphQLID;
-(id)fallbackURLs;
-(id)initWithGraphQLID:(id)arg1 canonicalURL:(id)arg2 ;
-(NSURL *)canonicalURL;
@end

