/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGModernConversationInputPanel.h>

@class CALayer, TGModernButton, UIActivityIndicatorView, UILabel;

@interface TGModernConversationSearchInputPanel : TGModernConversationInputPanel {

	CALayer* _stripeLayer;
	TGModernButton* _nextButton;
	TGModernButton* _previousButton;
	UIActivityIndicatorView* _activityIndicator;
	TGModernButton* _doneButton;
	unsigned long long _offset;
	unsigned long long _count;
	UILabel* _countLabel;
	TGModernButton* _calendarButton;
	BOOL _inProgress;
	BOOL _isSearching;
	/*^block*/id _next;
	/*^block*/id _previous;
	/*^block*/id _done;
	/*^block*/id _calendar;

}

@property (nonatomic,copy) id next;                         //@synthesize next=_next - In the implementation block
@property (nonatomic,copy) id previous;                     //@synthesize previous=_previous - In the implementation block
@property (nonatomic,copy) id done;                         //@synthesize done=_done - In the implementation block
@property (nonatomic,copy) id calendar;                     //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) BOOL inProgress;               //@synthesize inProgress=_inProgress - In the implementation block
@property (assign,nonatomic) BOOL isSearching;              //@synthesize isSearching=_isSearching - In the implementation block
-(void)changeToSize:(CGSize)arg1 keyboardHeight:(double)arg2 duration:(double)arg3 contentAreaHeight:(double)arg4 ;
-(void)adjustForSize:(CGSize)arg1 keyboardHeight:(double)arg2 duration:(double)arg3 animationCurve:(int)arg4 contentAreaHeight:(double)arg5 ;
-(void)_adjustForSize:(CGSize)arg1 keyboardHeight:(double)arg2 duration:(double)arg3 animationCurve:(int)arg4 contentAreaHeight:(double)arg5 ;
-(void)previousPressed;
-(void)calendarButtonPressed;
-(void)setOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)setIsSearching:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)next;
-(id)previous;
-(id)done;
-(void)setCalendar:(id)arg1 ;
-(id)calendar;
-(double)baseHeight;
-(void)nextPressed;
-(void)donePressed;
-(void)updateInterface;
-(void)setDone:(id)arg1 ;
-(BOOL)isSearching;
-(void)setPrevious:(id)arg1 ;
-(void)setInProgress:(BOOL)arg1 ;
-(BOOL)inProgress;
-(void)setNext:(id)arg1 ;
@end
