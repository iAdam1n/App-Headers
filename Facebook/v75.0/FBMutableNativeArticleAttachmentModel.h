/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNativeArticleAttachmentModel.h>

@class NSString, FBCustomLinkCoverModel, NSArray;

@interface FBMutableNativeArticleAttachmentModel : FBNativeArticleAttachmentModel

@property (nonatomic,copy) NSString * ownerID; 
@property (nonatomic,copy) NSString * ownerName; 
@property (nonatomic,copy) NSString * graphQLID; 
@property (nonatomic,retain) FBCustomLinkCoverModel * linkCoverModel; 
@property (assign,nonatomic) unsigned long long attachmentModelType; 
@property (nonatomic,copy) NSString * canonicalURLString; 
@property (nonatomic,copy) NSString * shareURLString; 
@property (nonatomic,copy) NSString * featuredElementID; 
@property (nonatomic,copy) NSArray * featuredArticleIDs; 
@property (nonatomic,copy) NSArray * featuredArticleCanonicalURLs; 
-(void)setGraphQLID:(NSString *)arg1 ;
-(void)setAttachmentModelType:(unsigned long long)arg1 ;
-(void)setCanonicalURLString:(NSString *)arg1 ;
-(void)setShareURLString:(NSString *)arg1 ;
-(void)setFeaturedElementID:(NSString *)arg1 ;
-(void)setLinkCoverModel:(FBCustomLinkCoverModel *)arg1 ;
-(void)setFeaturedArticleIDs:(NSArray *)arg1 ;
-(void)setFeaturedArticleCanonicalURLs:(NSArray *)arg1 ;
-(void)setOwnerName:(NSString *)arg1 ;
-(void)setOwnerID:(NSString *)arg1 ;
@end
