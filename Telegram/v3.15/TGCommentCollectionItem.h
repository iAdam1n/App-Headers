/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGCollectionItem.h>

@class NSAttributedString, UIColor, NSString;

@interface TGCommentCollectionItem : TGCollectionItem {

	NSAttributedString* _attributedText;
	double _lastContainerWidth;
	CGSize _calculatedSize;
	BOOL _skipLastLineInSizeComputation;
	BOOL _hidden;
	BOOL _showProgress;
	double _topInset;
	double _bottomInset;
	double _alpha;
	UIColor* _textColor;
	NSString* _text;
	/*^block*/id _action;

}

@property (assign,nonatomic) BOOL skipLastLineInSizeComputation;              //@synthesize skipLastLineInSizeComputation=_skipLastLineInSizeComputation - In the implementation block
@property (assign,nonatomic) double topInset;                                 //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic) double bottomInset;                              //@synthesize bottomInset=_bottomInset - In the implementation block
@property (assign,nonatomic) double alpha;                                    //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                     //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                             //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL showProgress;                               //@synthesize showProgress=_showProgress - In the implementation block
@property (nonatomic,copy) id action;                                         //@synthesize action=_action - In the implementation block
+(id)attributedStringFromText:(id)arg1 allowFormatting:(BOOL)arg2 paragraphSpacing:(double)arg3 ;
-(void)bindView:(id)arg1 ;
-(void)unbindView;
-(Class)itemViewClass;
-(CGSize)itemSizeForContainerSize:(CGSize)arg1 ;
-(id)initWithFormattedText:(id)arg1 ;
-(void)setFormattedText:(id)arg1 ;
-(void)setShowProgress:(BOOL)arg1 ;
-(BOOL)showProgress;
-(id)initWithFormattedText:(id)arg1 paragraphSpacing:(double)arg2 ;
-(BOOL)skipLastLineInSizeComputation;
-(void)setSkipLastLineInSizeComputation:(BOOL)arg1 ;
-(id)init;
-(void)setAlpha:(double)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)action;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)alpha;
-(double)topInset;
-(void)setTopInset:(double)arg1 ;
-(UIColor *)textColor;
-(void)setAction:(id)arg1 ;
-(id)initWithText:(id)arg1 ;
-(BOOL)hidden;
-(void)setBottomInset:(double)arg1 ;
-(double)bottomInset;
@end
