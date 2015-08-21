/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <Twitter/TFNAttributedTextViewDelegate.h>

@protocol T1StatusBodyTextViewDelegate;
@class TFNAttributedTextView, TFNTwitterStatus, TFNTwitterAccount, NSString;

@interface T1StatusBodyTextView : UIView <TFNAttributedTextViewDelegate> {

	TFNAttributedTextView* _bodyTextView;
	BOOL _needsContentUpdate;
	TFNTwitterStatus* _status;
	unsigned long long _options;
	TFNTwitterAccount* _account;
	unsigned long long _displayTextOptions;
	id<T1StatusBodyTextViewDelegate> _delegate;

}

@property (nonatomic,readonly) TFNTwitterStatus * status;                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) TFNTwitterAccount * account;                                 //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) unsigned long long displayTextOptions;                       //@synthesize displayTextOptions=_displayTextOptions - In the implementation block
@property (assign,nonatomic,__weak) id<T1StatusBodyTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_backgroundOptionWithOptions:(unsigned long long)arg1 ;
+(void)_getFontSize:(out double*)arg1 lineHeight:(out double*)arg2 textColor:(out id*)arg3 linkTextColor:(out id*)arg4 forBackgroundOption:(unsigned long long)arg5 displayTextOptions:(unsigned long long)arg6 layoutMetrics:(id)arg7 ;
+(id)_truncationString;
+(id)_linkTextColorForDarkBackgroundOption:(unsigned long long)arg1 ;
+(double)heightForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 displayTextOptions:(unsigned long long)arg4 width:(double)arg5 layoutMetrics:(id)arg6 ;
+(double)heightForStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 displayTextOptions:(unsigned long long)arg4 width:(double)arg5 ;
+(double)bottomPaddingForLinkTapDetection;
-(void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(CGRect)arg3 ;
-(void)attributedTextView:(id)arg1 didLongPressRange:(id)arg2 rect:(CGRect)arg3 ;
-(void)attributedTextView:(id)arg1 didTapTruncationTokenAreaWithRect:(CGRect)arg2 ;
-(void)setSelectionPaddingEnabled:(BOOL)arg1 ;
-(void)_updateContentIfNeeded;
-(id)_attributedTextModelWithLayoutMetrics:(id)arg1 ;
-(id)_filteredDisplayTextURLRanges;
-(void)setStatus:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 displayTextOptions:(unsigned long long)arg4 ;
-(void)statusDidUpdate:(BOOL)arg1 ;
-(BOOL)hasActiveRangeAtPoint:(CGPoint)arg1 ;
-(unsigned long long)displayTextOptions;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<T1StatusBodyTextViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<T1StatusBodyTextViewDelegate>)delegate;
-(id)accessibilityValue;
-(unsigned long long)options;
-(TFNTwitterStatus *)status;
-(TFNTwitterAccount *)account;
@end

