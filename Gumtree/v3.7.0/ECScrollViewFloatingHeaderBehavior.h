/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol ECScrollableViewControllerProtocol;
@class NSMutableArray, NSArray, NSString;

@interface ECScrollViewFloatingHeaderBehavior : NSObject <UIScrollViewDelegate> {

	NSMutableArray* _itemsFloating;
	NSMutableArray* _itemsVisible;
	id<ECScrollableViewControllerProtocol> _viewController;
	NSArray* _headerViews;
	CGPoint _lastScrollOffset;

}

@property (nonatomic,readonly) id<ECScrollableViewControllerProtocol> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) NSArray * headerViews;                                              //@synthesize headerViews=_headerViews - In the implementation block
@property (assign,nonatomic) CGPoint lastScrollOffset;                                             //@synthesize lastScrollOffset=_lastScrollOffset - In the implementation block
@property (nonatomic,readonly) double maxScrollViewOffset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVisibility:(BOOL)arg1 forView:(id)arg2 ;
-(void)setFloating:(BOOL)arg1 forView:(id)arg2 ;
-(CGPoint)lastScrollOffset;
-(double)maxScrollViewOffset;
-(double)updateHeadersForScrollAmount:(double)arg1 ;
-(void)setScrollViewOffset:(double)arg1 ;
-(void)setLastScrollOffset:(CGPoint)arg1 ;
-(void)setHeaderPosition:(double)arg1 forView:(id)arg2 ;
-(double)getTopLocationForHeader:(id)arg1 ;
-(id)initWithViewController:(id)arg1 andViews:(id)arg2 ;
-(void)resetHeaders;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<ECScrollableViewControllerProtocol>)viewController;
-(NSArray *)headerViews;
@end

