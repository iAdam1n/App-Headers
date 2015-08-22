/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNItemsDataViewAdapter.h>

@class T1InlinePromptContentView;

@interface T1CallToActionAdapter : TFNItemsDataViewAdapter {

	T1InlinePromptContentView* _prototypeView;
	BOOL _trimsTop;
	BOOL _trimsBottom;
	unsigned long long _style;

}

@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) BOOL trimsTop;                         //@synthesize trimsTop=_trimsTop - In the implementation block
@property (nonatomic,readonly) BOOL trimsBottom;                      //@synthesize trimsBottom=_trimsBottom - In the implementation block
-(id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(id)initWithStyle:(unsigned long long)arg1 trimsTop:(BOOL)arg2 trimsBottom:(BOOL)arg3 ;
-(id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(CGSize)dataViewController:(id)arg1 collectionViewSizeForItem:(id)arg2 constrainedToSize:(CGSize)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5 ;
-(BOOL)dataViewController:(id)arg1 shouldHighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4 ;
-(unsigned long long)_contentViewStyle;
-(id)_contentViewWithFrame:(CGRect)arg1 ;
-(void)_setPropertiesForContentView:(id)arg1 withCallToAction:(id)arg2 ;
-(CGSize)_getContentViewSizeForItem:(id)arg1 controller:(id)arg2 ;
-(BOOL)trimsTop;
-(BOOL)trimsBottom;
-(void)_actionTapped:(id)arg1 ;
-(id)_contentViewContainingView:(id)arg1 ;
-(id)_callToActionForContentView:(id)arg1 ;
-(id)init;
-(unsigned long long)style;
-(id)initWithStyle:(unsigned long long)arg1 ;
@end
