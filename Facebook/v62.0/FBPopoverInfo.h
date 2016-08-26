/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class UIView, UIBarButtonItem, NSArray;

@interface FBPopoverInfo : NSObject {

	BOOL _hideArrow;
	UIView* _sourceView;
	UIView* _hostingView;
	UIBarButtonItem* _sourceButtonItem;
	NSArray* _passthroughViews;
	unsigned long long _arrowDirections;
	Class _backgroundViewClass;
	CGSize _contentSize;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UIView * sourceView;                             //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,retain) UIView * hostingView;                            //@synthesize hostingView=_hostingView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                               //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * sourceButtonItem;              //@synthesize sourceButtonItem=_sourceButtonItem - In the implementation block
@property (nonatomic,retain) NSArray * passthroughViews;                      //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (assign,nonatomic) unsigned long long arrowDirections;              //@synthesize arrowDirections=_arrowDirections - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                              //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) Class backgroundViewClass;                       //@synthesize backgroundViewClass=_backgroundViewClass - In the implementation block
@property (assign,nonatomic) BOOL hideArrow;                                  //@synthesize hideArrow=_hideArrow - In the implementation block
-(void)setHostingView:(UIView *)arg1 ;
-(UIView *)hostingView;
-(BOOL)hideArrow;
-(void)setHideArrow:(BOOL)arg1 ;
-(Class)backgroundViewClass;
-(void)setBackgroundViewClass:(Class)arg1 ;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)setArrowDirections:(unsigned long long)arg1 ;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(unsigned long long)arrowDirections;
-(void)setSourceButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)sourceButtonItem;
@end
