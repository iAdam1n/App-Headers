/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGMediaPickerCaptionInputPanelDelegate.h>

@class TGObserverProxy, UIGestureRecognizer, TGMediaPickerCaptionInputPanel, UIView, TGSuggestionContext, NSString;

@interface TGPhotoCaptionInputMixin : NSObject <TGMediaPickerCaptionInputPanelDelegate> {

	TGObserverProxy* _keyboardWillChangeFrameProxy;
	BOOL _editing;
	UIGestureRecognizer* _dismissTapRecognizer;
	TGMediaPickerCaptionInputPanel* _inputPanel;
	UIView* _dismissView;
	long long _interfaceOrientation;
	double _keyboardHeight;
	double _contentAreaHeight;
	TGSuggestionContext* _suggestionContext;
	/*^block*/id _panelParentView;
	/*^block*/id _panelFocused;
	/*^block*/id _finishedWithCaption;
	/*^block*/id _keyboardHeightChanged;
	NSString* _caption;

}

@property (nonatomic,readonly) TGMediaPickerCaptionInputPanel * inputPanel;              //@synthesize inputPanel=_inputPanel - In the implementation block
@property (nonatomic,readonly) UIView * dismissView;                                     //@synthesize dismissView=_dismissView - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                             //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,readonly) double keyboardHeight;                                    //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (assign,nonatomic) double contentAreaHeight;                                   //@synthesize contentAreaHeight=_contentAreaHeight - In the implementation block
@property (nonatomic,retain) TGSuggestionContext * suggestionContext;                    //@synthesize suggestionContext=_suggestionContext - In the implementation block
@property (nonatomic,copy) id panelParentView;                                           //@synthesize panelParentView=_panelParentView - In the implementation block
@property (nonatomic,copy) id panelFocused;                                              //@synthesize panelFocused=_panelFocused - In the implementation block
@property (nonatomic,copy) id finishedWithCaption;                                       //@synthesize finishedWithCaption=_finishedWithCaption - In the implementation block
@property (nonatomic,copy) id keyboardHeightChanged;                                     //@synthesize keyboardHeightChanged=_keyboardHeightChanged - In the implementation block
@property (nonatomic,retain) NSString * caption;                                         //@synthesize caption=_caption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)inputPanelFocused:(id)arg1 ;
-(void)inputPanelMentionEntered:(id)arg1 mention:(id)arg2 startOfLine:(BOOL)arg3 ;
-(void)inputPanelHashtagEntered:(id)arg1 hashtag:(id)arg2 ;
-(void)inputPanelWillChangeHeight:(id)arg1 height:(double)arg2 duration:(double)arg3 animationCurve:(int)arg4 ;
-(void)setContentAreaHeight:(double)arg1 ;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(TGSuggestionContext *)suggestionContext;
-(void)setSuggestionContext:(TGSuggestionContext *)arg1 ;
-(void)setPanelParentView:(id)arg1 ;
-(void)setPanelFocused:(id)arg1 ;
-(void)setFinishedWithCaption:(id)arg1 ;
-(void)setKeyboardHeightChanged:(id)arg1 ;
-(void)createInputPanelIfNeeded;
-(void)setCaptionPanelHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCaption:(id)arg1 animated:(BOOL)arg2 ;
-(TGMediaPickerCaptionInputPanel *)inputPanel;
-(void)updateLayoutWithFrame:(CGRect)arg1 edgeInsets:(UIEdgeInsets)arg2 ;
-(BOOL)inputPanelShouldBecomeFirstResponder:(id)arg1 ;
-(void)inputPanelRequestedSetCaption:(id)arg1 text:(id)arg2 ;
-(void)enableDismissal;
-(id)_parentView;
-(void)handleDismissTap:(id)arg1 ;
-(void)createDismissViewIfNeeded;
-(id)panelFocused;
-(id)finishedWithCaption;
-(id)panelParentView;
-(id)keyboardHeightChanged;
-(double)contentAreaHeight;
-(id)init;
-(void)dealloc;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)beginEditing;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(UIView *)dismissView;
-(void)destroy;
-(double)keyboardHeight;
@end
