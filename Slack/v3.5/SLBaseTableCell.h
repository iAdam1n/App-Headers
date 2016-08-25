/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class SLBaseCellView, UIColor, Star, User, NSMutableDictionary;

@interface SLBaseTableCell : UITableViewCell {

	BOOL _rounded;
	BOOL _top;
	BOOL _bottom;
	BOOL _showCount;
	BOOL _showCountAsLabel;
	BOOL _showAccessoryView;
	BOOL _showCheckmark;
	BOOL _showCheckmarkOnLeft;
	BOOL _showRadiomark;
	BOOL _showSeparator;
	BOOL _shouldShortenSeparator;
	BOOL _showTopSeparator;
	BOOL _shouldFillColor;
	BOOL _shouldShowHighlighted;
	BOOL _shouldFillShortColor;
	BOOL _pressed;
	SLBaseCellView* _cellView;
	long long _count;
	UIColor* _countColor;
	double _originX;
	double _countOriginX;
	UIColor* _cellFillColor;
	UIColor* _cellSeparatorColor;
	double _accessoryPaddingRight;
	/*^block*/id _drawRect;
	Star* _star;
	User* _user;
	UIColor* _shortFillColor;
	double _shortFillColorInset;
	UIColor* _highlightedFillColor;
	UIColor* _highlightedTitleColor;
	UIColor* _highlightedSymbolColor;
	UIColor* _highlightedShortFillColor;
	NSMutableDictionary* _animatedGifCustomEmojiImageViews;

}

@property (nonatomic,retain) SLBaseCellView * cellView;                                           //@synthesize cellView=_cellView - In the implementation block
@property (assign,nonatomic) BOOL rounded;                                                        //@synthesize rounded=_rounded - In the implementation block
@property (assign,nonatomic) BOOL top;                                                            //@synthesize top=_top - In the implementation block
@property (assign,nonatomic) BOOL bottom;                                                         //@synthesize bottom=_bottom - In the implementation block
@property (assign,nonatomic) long long count;                                                     //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) UIColor * countColor;                                                //@synthesize countColor=_countColor - In the implementation block
@property (assign,nonatomic) BOOL showCount;                                                      //@synthesize showCount=_showCount - In the implementation block
@property (assign,nonatomic) BOOL showCountAsLabel;                                               //@synthesize showCountAsLabel=_showCountAsLabel - In the implementation block
@property (assign,nonatomic) BOOL showAccessoryView;                                              //@synthesize showAccessoryView=_showAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL showCheckmark;                                                  //@synthesize showCheckmark=_showCheckmark - In the implementation block
@property (assign,nonatomic) BOOL showCheckmarkOnLeft;                                            //@synthesize showCheckmarkOnLeft=_showCheckmarkOnLeft - In the implementation block
@property (assign,nonatomic) BOOL showRadiomark;                                                  //@synthesize showRadiomark=_showRadiomark - In the implementation block
@property (assign,nonatomic) BOOL showSeparator;                                                  //@synthesize showSeparator=_showSeparator - In the implementation block
@property (assign,nonatomic) BOOL shouldShortenSeparator;                                         //@synthesize shouldShortenSeparator=_shouldShortenSeparator - In the implementation block
@property (assign,nonatomic) BOOL showTopSeparator;                                               //@synthesize showTopSeparator=_showTopSeparator - In the implementation block
@property (assign,nonatomic) BOOL shouldFillColor;                                                //@synthesize shouldFillColor=_shouldFillColor - In the implementation block
@property (assign,nonatomic) BOOL shouldShowHighlighted;                                          //@synthesize shouldShowHighlighted=_shouldShowHighlighted - In the implementation block
@property (assign,nonatomic) double originX;                                                      //@synthesize originX=_originX - In the implementation block
@property (assign,nonatomic) double countOriginX;                                                 //@synthesize countOriginX=_countOriginX - In the implementation block
@property (nonatomic,retain) UIColor * cellFillColor;                                             //@synthesize cellFillColor=_cellFillColor - In the implementation block
@property (nonatomic,retain) UIColor * cellSeparatorColor;                                        //@synthesize cellSeparatorColor=_cellSeparatorColor - In the implementation block
@property (assign,nonatomic) double accessoryPaddingRight;                                        //@synthesize accessoryPaddingRight=_accessoryPaddingRight - In the implementation block
@property (nonatomic,copy) id drawRect;                                                           //@synthesize drawRect=_drawRect - In the implementation block
@property (nonatomic,retain) Star * star;                                                         //@synthesize star=_star - In the implementation block
@property (nonatomic,retain) User * user;                                                         //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) UIColor * shortFillColor;                                            //@synthesize shortFillColor=_shortFillColor - In the implementation block
@property (assign,nonatomic) BOOL shouldFillShortColor;                                           //@synthesize shouldFillShortColor=_shouldFillShortColor - In the implementation block
@property (assign,nonatomic) double shortFillColorInset;                                          //@synthesize shortFillColorInset=_shortFillColorInset - In the implementation block
@property (nonatomic,retain) UIColor * highlightedFillColor;                                      //@synthesize highlightedFillColor=_highlightedFillColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTitleColor;                                     //@synthesize highlightedTitleColor=_highlightedTitleColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedSymbolColor;                                    //@synthesize highlightedSymbolColor=_highlightedSymbolColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedShortFillColor;                                 //@synthesize highlightedShortFillColor=_highlightedShortFillColor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * animatedGifCustomEmojiImageViews;              //@synthesize animatedGifCustomEmojiImageViews=_animatedGifCustomEmojiImageViews - In the implementation block
@property (assign,nonatomic) BOOL pressed;                                                        //@synthesize pressed=_pressed - In the implementation block
-(Star *)star;
-(void)redisplay;
-(NSMutableDictionary *)animatedGifCustomEmojiImageViews;
-(BOOL)shouldShowHighlighted;
-(UIColor *)highlightedShortFillColor;
-(BOOL)shouldFillColor;
-(BOOL)shouldFillShortColor;
-(UIColor *)cellFillColor;
-(UIColor *)shortFillColor;
-(double)shortFillColorInset;
-(BOOL)showTopSeparator;
-(UIColor *)highlightedFillColor;
-(BOOL)showAccessoryView;
-(BOOL)showCheckmarkOnLeft;
-(BOOL)showRadiomark;
-(BOOL)showCount;
-(BOOL)showCountAsLabel;
-(double)countOriginX;
-(UIColor *)countColor;
-(double)accessoryPaddingRight;
-(void)setCountOriginX:(double)arg1 ;
-(void)setAccessoryPaddingRight:(double)arg1 ;
-(void)setAnimatedGifCustomEmojiImageViews:(NSMutableDictionary *)arg1 ;
-(void)setRounded:(BOOL)arg1 ;
-(void)setShowCount:(BOOL)arg1 ;
-(void)setShowAccessoryView:(BOOL)arg1 ;
-(void)setShowRadiomark:(BOOL)arg1 ;
-(void)setShouldShortenSeparator:(BOOL)arg1 ;
-(void)setShowTopSeparator:(BOOL)arg1 ;
-(void)setShouldFillColor:(BOOL)arg1 ;
-(void)setShouldShowHighlighted:(BOOL)arg1 ;
-(void)setCellFillColor:(UIColor *)arg1 ;
-(void)setCellSeparatorColor:(UIColor *)arg1 ;
-(void)setDrawRect:(id)arg1 ;
-(void)setStar:(Star *)arg1 ;
-(void)setShortFillColor:(UIColor *)arg1 ;
-(void)setShortFillColorInset:(double)arg1 ;
-(void)setHighlightedFillColor:(UIColor *)arg1 ;
-(void)setHighlightedTitleColor:(UIColor *)arg1 ;
-(void)setHighlightedSymbolColor:(UIColor *)arg1 ;
-(void)setHighlightedShortFillColor:(UIColor *)arg1 ;
-(void)setShowCheckmarkOnLeft:(BOOL)arg1 ;
-(void)setupCellViewWithClass:(Class)arg1 ;
-(BOOL)rounded;
-(void)setCountColor:(UIColor *)arg1 ;
-(void)setShowCountAsLabel:(BOOL)arg1 ;
-(BOOL)shouldShortenSeparator;
-(id)drawRect;
-(void)setShouldFillShortColor:(BOOL)arg1 ;
-(UIColor *)highlightedTitleColor;
-(UIColor *)highlightedSymbolColor;
-(User *)user;
-(void)setUser:(User *)arg1 ;
-(long long)count;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)pressed;
-(void)setCount:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(UIColor *)cellSeparatorColor;
-(SLBaseCellView *)cellView;
-(void)setOriginX:(double)arg1 ;
-(double)originX;
-(void)setCellView:(SLBaseCellView *)arg1 ;
-(BOOL)showCheckmark;
-(void)setShowCheckmark:(BOOL)arg1 ;
-(BOOL)top;
-(BOOL)bottom;
-(void)setTop:(BOOL)arg1 ;
-(void)setBottom:(BOOL)arg1 ;
@end

