/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBCustomLinkCoverModel, NSArray;

@interface FBNativeArticleAttachmentModel : NSObject {

	NSString* _ownerID;
	NSString* _graphQLID;
	FBCustomLinkCoverModel* _linkCoverModel;
	unsigned long long _attachmentModelType;
	NSString* _canonicalURLString;
	NSString* _shareURLString;
	NSString* _featuredElementID;
	NSArray* _featuredArticleIDs;
	NSArray* _featuredArticleCanonicalURLs;

}

@property (nonatomic,copy,readonly) NSString * ownerID;                                  //@synthesize ownerID=_ownerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphQLID;                                //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,readonly) FBCustomLinkCoverModel * linkCoverModel;                  //@synthesize linkCoverModel=_linkCoverModel - In the implementation block
@property (nonatomic,readonly) unsigned long long attachmentModelType;                   //@synthesize attachmentModelType=_attachmentModelType - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalURLString;                       //@synthesize canonicalURLString=_canonicalURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * shareURLString;                           //@synthesize shareURLString=_shareURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugInfoString; 
@property (nonatomic,copy,readonly) NSString * featuredElementID;                        //@synthesize featuredElementID=_featuredElementID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * featuredArticleIDs;                        //@synthesize featuredArticleIDs=_featuredArticleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * featuredArticleCanonicalURLs;              //@synthesize featuredArticleCanonicalURLs=_featuredArticleCanonicalURLs - In the implementation block
-(void)_includeAttachmentDebugInfo;
-(void)unregisterForBugReporting;
-(void)registerForBugReporting;
-(void)dealloc;
-(NSString *)graphQLID;
-(NSString *)debugInfoString;
-(NSArray *)featuredArticleIDs;
-(NSArray *)featuredArticleCanonicalURLs;
-(NSString *)featuredElementID;
-(NSString *)shareURLString;
-(NSString *)canonicalURLString;
-(FBCustomLinkCoverModel *)linkCoverModel;
-(id)description;
-(NSString *)ownerID;
-(unsigned long long)attachmentModelType;
@end
