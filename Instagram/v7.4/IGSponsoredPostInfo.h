/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/NSCoding.h>

@class NSString, NSArray;

@interface IGSponsoredPostInfo : NSObject <NSCoding> {

	BOOL _showIcon;
	BOOL _hideComments;
	BOOL _hideCommentButton;
	BOOL _isHoldout;
	BOOL _showAdChoicesIcon;
	NSString* _adTitle;
	NSString* _label;
	NSArray* _viewTags;
	NSString* _trackingToken;
	NSArray* _possibleHideAnswers;
	NSString* _aboutAdsServerParams;

}

@property (nonatomic,retain) NSString * adTitle;                         //@synthesize adTitle=_adTitle - In the implementation block
@property (nonatomic,retain) NSString * label;                           //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL showIcon;                              //@synthesize showIcon=_showIcon - In the implementation block
@property (assign,nonatomic) BOOL hideComments;                          //@synthesize hideComments=_hideComments - In the implementation block
@property (assign,nonatomic) BOOL hideCommentButton;                     //@synthesize hideCommentButton=_hideCommentButton - In the implementation block
@property (assign,nonatomic) BOOL isHoldout;                             //@synthesize isHoldout=_isHoldout - In the implementation block
@property (assign,nonatomic) BOOL showAdChoicesIcon;                     //@synthesize showAdChoicesIcon=_showAdChoicesIcon - In the implementation block
@property (nonatomic,copy) NSArray * viewTags;                           //@synthesize viewTags=_viewTags - In the implementation block
@property (nonatomic,copy) NSString * trackingToken;                     //@synthesize trackingToken=_trackingToken - In the implementation block
@property (nonatomic,retain) NSArray * possibleHideAnswers;              //@synthesize possibleHideAnswers=_possibleHideAnswers - In the implementation block
@property (nonatomic,copy) NSString * aboutAdsServerParams;              //@synthesize aboutAdsServerParams=_aboutAdsServerParams - In the implementation block
-(BOOL)hideComments;
-(NSString *)adTitle;
-(BOOL)hideCommentButton;
-(BOOL)isHoldout;
-(NSArray *)viewTags;
-(BOOL)showAdChoicesIcon;
-(NSString *)trackingToken;
-(NSString *)aboutAdsServerParams;
-(void)setAdTitle:(NSString *)arg1 ;
-(void)setHideComments:(BOOL)arg1 ;
-(void)setHideCommentButton:(BOOL)arg1 ;
-(void)setIsHoldout:(BOOL)arg1 ;
-(void)setShowAdChoicesIcon:(BOOL)arg1 ;
-(void)setAboutAdsServerParams:(NSString *)arg1 ;
-(void)setViewTags:(NSArray *)arg1 ;
-(void)setTrackingToken:(NSString *)arg1 ;
-(void)preparePossibleHideAnswers:(id)arg1 ;
-(void)setPossibleHideAnswers:(NSArray *)arg1 ;
-(NSArray *)possibleHideAnswers;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)showIcon;
-(void)setShowIcon:(BOOL)arg1 ;
@end
