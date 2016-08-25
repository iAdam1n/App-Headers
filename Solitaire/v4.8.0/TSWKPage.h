/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, NSArray;

@interface TSWKPage : NSObject {

	NSString* _pageId;
	NSString* _pageName;
	UIColor* _backgroundColor;
	NSString* _backgroundImageUrl;
	NSArray* _elements;

}

@property (nonatomic,retain) NSString * pageId;                          //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,retain) NSString * pageName;                        //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSString * backgroundImageUrl;              //@synthesize backgroundImageUrl=_backgroundImageUrl - In the implementation block
@property (nonatomic,retain) NSArray * elements;                         //@synthesize elements=_elements - In the implementation block
-(NSString *)pageId;
-(void)setPageId:(NSString *)arg1 ;
-(NSString *)pageName;
-(void)setPageName:(NSString *)arg1 ;
-(NSString *)backgroundImageUrl;
-(void)setBackgroundImageUrl:(NSString *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(NSArray *)elements;
-(void)setElements:(NSArray *)arg1 ;
@end

