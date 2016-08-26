/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntityRelatedArticleProtocol.h>

@class NSString, NSURL, UIImage;

@interface FBRichStoryEntityRelatedArticle : NSObject <FBRichStoryEntityRelatedArticleProtocol> {

	BOOL _isSponsored;
	NSString* _headline;
	NSString* _kicker;
	NSURL* _coverImageURL;
	UIImage* _coverPreviewImage;
	NSURL* _canonicalURL;
	NSString* _instantArticleID;

}

@property (nonatomic,copy) NSString * headline;                        //@synthesize headline=_headline - In the implementation block
@property (nonatomic,copy) NSString * kicker;                          //@synthesize kicker=_kicker - In the implementation block
@property (nonatomic,copy) NSURL * coverImageURL;                      //@synthesize coverImageURL=_coverImageURL - In the implementation block
@property (nonatomic,retain) UIImage * coverPreviewImage;              //@synthesize coverPreviewImage=_coverPreviewImage - In the implementation block
@property (nonatomic,copy) NSURL * canonicalURL;                       //@synthesize canonicalURL=_canonicalURL - In the implementation block
@property (nonatomic,copy) NSString * instantArticleID;                //@synthesize instantArticleID=_instantArticleID - In the implementation block
@property (assign,nonatomic) BOOL isSponsored;                         //@synthesize isSponsored=_isSponsored - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)relatedArticleWithHeadline:(id)arg1 kicker:(id)arg2 coverImageURL:(id)arg3 coverPreviewImage:(id)arg4 canonicalURL:(id)arg5 instantArticleID:(id)arg6 isSponsored:(BOOL)arg7 ;
-(NSURL *)coverImageURL;
-(void)setCoverImageURL:(NSURL *)arg1 ;
-(NSURL *)canonicalURL;
-(NSString *)kicker;
-(UIImage *)coverPreviewImage;
-(BOOL)hasInstantArticle;
-(NSString *)instantArticleID;
-(void)setIsSponsored:(BOOL)arg1 ;
-(void)setKicker:(NSString *)arg1 ;
-(void)setCoverPreviewImage:(UIImage *)arg1 ;
-(void)setCanonicalURL:(NSURL *)arg1 ;
-(void)setInstantArticleID:(NSString *)arg1 ;
-(void)setHeadline:(NSString *)arg1 ;
-(NSString *)headline;
-(BOOL)isSponsored;
@end
