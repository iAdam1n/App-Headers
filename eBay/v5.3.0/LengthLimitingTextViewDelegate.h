/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UITextViewDelegate.h>

@protocol UITextViewDelegate;
@class NSString;

@interface LengthLimitingTextViewDelegate : NSObject <UITextViewDelegate> {

	BOOL _acceptDigitsOnly;
	BOOL _acceptOnlyNumericRange;
	BOOL _autoTruncateOverlengthStrings;
	id<UITextViewDelegate> _forwardDelegate;
	unsigned long long _maxLength;
	unsigned long long _minRangeValue;
	unsigned long long _maxRangeValue;

}

@property (assign,nonatomic,__weak) id<UITextViewDelegate> forwardDelegate;              //@synthesize forwardDelegate=_forwardDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;                               //@synthesize maxLength=_maxLength - In the implementation block
@property (assign,nonatomic) BOOL acceptDigitsOnly;                                      //@synthesize acceptDigitsOnly=_acceptDigitsOnly - In the implementation block
@property (assign,nonatomic) BOOL acceptOnlyNumericRange;                                //@synthesize acceptOnlyNumericRange=_acceptOnlyNumericRange - In the implementation block
@property (assign,nonatomic) BOOL autoTruncateOverlengthStrings;                         //@synthesize autoTruncateOverlengthStrings=_autoTruncateOverlengthStrings - In the implementation block
@property (assign,nonatomic) unsigned long long minRangeValue;                           //@synthesize minRangeValue=_minRangeValue - In the implementation block
@property (assign,nonatomic) unsigned long long maxRangeValue;                           //@synthesize maxRangeValue=_maxRangeValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UITextViewDelegate>)forwardDelegate;
-(void)setForwardDelegate:(id<UITextViewDelegate>)arg1 ;
-(BOOL)acceptDigitsOnly;
-(void)setAcceptDigitsOnly:(BOOL)arg1 ;
-(BOOL)acceptOnlyNumericRange;
-(void)setAcceptOnlyNumericRange:(BOOL)arg1 ;
-(BOOL)autoTruncateOverlengthStrings;
-(void)setAutoTruncateOverlengthStrings:(BOOL)arg1 ;
-(unsigned long long)minRangeValue;
-(void)setMinRangeValue:(unsigned long long)arg1 ;
-(unsigned long long)maxRangeValue;
-(void)setMaxRangeValue:(unsigned long long)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(unsigned long long)maxLength;
@end

