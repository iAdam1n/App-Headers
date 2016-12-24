/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString, NSURL, NSArray;

@interface FBComposerIntentTarget : FBIntentTarget {

	NSString* _authorGraphQLID;
	NSString* _authorGraphQLTypeName;
	NSString* _targetGraphQLID;
	NSString* _targetGraphQLTypeName;
	NSURL* _sharedURL;
	NSString* _shareableType;
	NSString* _sharedText;
	NSString* _sharedQuote;
	NSString* _sharedObjectID;
	NSString* _taggedPlaceID;
	long long _composerIntentTargetStyle;
	NSString* _contentOrigin;
	NSString* _prefilledString;

}

@property (nonatomic,copy,readonly) NSArray * sharedMediaURLs; 
@property (nonatomic,copy,readonly) NSString * authorGraphQLID;                    //@synthesize authorGraphQLID=_authorGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * authorGraphQLTypeName;              //@synthesize authorGraphQLTypeName=_authorGraphQLTypeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetGraphQLID;                    //@synthesize targetGraphQLID=_targetGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetGraphQLTypeName;              //@synthesize targetGraphQLTypeName=_targetGraphQLTypeName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * sharedURL;                             //@synthesize sharedURL=_sharedURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * shareableType;                      //@synthesize shareableType=_shareableType - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharedText;                         //@synthesize sharedText=_sharedText - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharedQuote;                        //@synthesize sharedQuote=_sharedQuote - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharedObjectID;                     //@synthesize sharedObjectID=_sharedObjectID - In the implementation block
@property (nonatomic,copy,readonly) NSString * taggedPlaceID;                      //@synthesize taggedPlaceID=_taggedPlaceID - In the implementation block
@property (nonatomic,readonly) long long composerIntentTargetStyle;                //@synthesize composerIntentTargetStyle=_composerIntentTargetStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentOrigin;                      //@synthesize contentOrigin=_contentOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSString * prefilledString;                    //@synthesize prefilledString=_prefilledString - In the implementation block
+(id)composerTargetWithAuthorGraphQLID:(id)arg1 authorGraphQLTypeName:(id)arg2 targetGraphQLID:(id)arg3 targetGraphQLTypeName:(id)arg4 sharedURL:(id)arg5 sharedText:(id)arg6 sharedQuote:(id)arg7 sharedObjectID:(id)arg8 shareableType:(id)arg9 taggedPlaceID:(id)arg10 composerIntentTargetStyle:(long long)arg11 contentOrigin:(id)arg12 prefilledString:(id)arg13 ;
+(id)composerTargetWithAuthorGraphQLID:(id)arg1 authorGraphQLTypeName:(id)arg2 targetGraphQLID:(id)arg3 targetGraphQLTypeName:(id)arg4 sharedURL:(id)arg5 sharedText:(id)arg6 sharedQuote:(id)arg7 sharedObjectID:(id)arg8 shareableType:(id)arg9 taggedPlaceID:(id)arg10 composerIntentTargetStyle:(long long)arg11 contentOrigin:(id)arg12 prefilledString:(id)arg13 fileSystemSharedMediaURLs:(id)arg14 ;
-(id)fallbackURLs;
-(NSString *)shareableType;
-(NSString *)targetGraphQLID;
-(NSString *)contentOrigin;
-(NSString *)targetGraphQLTypeName;
-(NSString *)sharedText;
-(long long)composerIntentTargetStyle;
-(NSString *)authorGraphQLTypeName;
-(NSURL *)sharedURL;
-(NSString *)sharedQuote;
-(NSString *)authorGraphQLID;
-(NSString *)prefilledString;
-(NSArray *)sharedMediaURLs;
-(NSString *)sharedObjectID;
-(NSString *)taggedPlaceID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
