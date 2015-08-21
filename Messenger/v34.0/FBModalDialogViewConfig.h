/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <Messenger/FBFIGConfig.h>

@class NSString, UIFont, UIColor, NSArray, FBImageDownloader, FBModalDialogViewItem, UIView;

@interface FBModalDialogViewConfig : FBValueObject <FBFIGConfig> {

	BOOL _hasDismissButton;
	NSString* _title;
	UIFont* _titleFont;
	UIColor* _titleColor;
	unsigned long long _titleMaxNumberOfLines;
	NSString* _message;
	UIFont* _messageFont;
	UIColor* _messageColor;
	unsigned long long _messageMaxNumberOfLines;
	NSString* _facepileTitle;
	UIFont* _facepileTitleFont;
	UIColor* _facepileTitleColor;
	unsigned long long _facepileTitleMaxNumberOfLines;
	NSArray* _facepileItems;
	unsigned long long _facepileItemSize;
	FBImageDownloader* _facepileImageDownloader;
	FBModalDialogViewItem* _imageItem;
	UIColor* _separatorColor;
	UIFont* _buttonTitleFont;
	unsigned long long _buttonLayout;
	NSString* _primaryButtonTitle;
	UIColor* _primaryButtonTitleColor;
	UIColor* _primaryButtonHighlightedTitleColor;
	NSString* _secondaryButtonTitle;
	UIColor* _secondaryButtonTitleColor;
	UIColor* _secondaryButtonHighlightedTitleColor;
	NSString* _tertiaryButtonTitle;
	UIColor* _tertiaryButtonTitleColor;
	UIColor* _tertiaryButtonHighlightedTitleColor;
	UIView* _customView;
	UIColor* _backgroundColor;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) UIFont * titleFont;                                          //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * titleColor;                                        //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,readonly) unsigned long long titleMaxNumberOfLines;                         //@synthesize titleMaxNumberOfLines=_titleMaxNumberOfLines - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                                          //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) UIFont * messageFont;                                        //@synthesize messageFont=_messageFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * messageColor;                                      //@synthesize messageColor=_messageColor - In the implementation block
@property (nonatomic,readonly) unsigned long long messageMaxNumberOfLines;                       //@synthesize messageMaxNumberOfLines=_messageMaxNumberOfLines - In the implementation block
@property (nonatomic,copy,readonly) NSString * facepileTitle;                                    //@synthesize facepileTitle=_facepileTitle - In the implementation block
@property (nonatomic,copy,readonly) UIFont * facepileTitleFont;                                  //@synthesize facepileTitleFont=_facepileTitleFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * facepileTitleColor;                                //@synthesize facepileTitleColor=_facepileTitleColor - In the implementation block
@property (nonatomic,readonly) unsigned long long facepileTitleMaxNumberOfLines;                 //@synthesize facepileTitleMaxNumberOfLines=_facepileTitleMaxNumberOfLines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * facepileItems;                                     //@synthesize facepileItems=_facepileItems - In the implementation block
@property (nonatomic,readonly) unsigned long long facepileItemSize;                              //@synthesize facepileItemSize=_facepileItemSize - In the implementation block
@property (nonatomic,readonly) FBImageDownloader * facepileImageDownloader;                      //@synthesize facepileImageDownloader=_facepileImageDownloader - In the implementation block
@property (nonatomic,copy,readonly) FBModalDialogViewItem * imageItem;                           //@synthesize imageItem=_imageItem - In the implementation block
@property (nonatomic,readonly) BOOL hasDismissButton;                                            //@synthesize hasDismissButton=_hasDismissButton - In the implementation block
@property (nonatomic,copy,readonly) UIColor * separatorColor;                                    //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,copy,readonly) UIFont * buttonTitleFont;                                    //@synthesize buttonTitleFont=_buttonTitleFont - In the implementation block
@property (nonatomic,readonly) unsigned long long buttonLayout;                                  //@synthesize buttonLayout=_buttonLayout - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryButtonTitle;                               //@synthesize primaryButtonTitle=_primaryButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryButtonTitleColor;                           //@synthesize primaryButtonTitleColor=_primaryButtonTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * primaryButtonHighlightedTitleColor;                //@synthesize primaryButtonHighlightedTitleColor=_primaryButtonHighlightedTitleColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryButtonTitle;                             //@synthesize secondaryButtonTitle=_secondaryButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) UIColor * secondaryButtonTitleColor;                         //@synthesize secondaryButtonTitleColor=_secondaryButtonTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * secondaryButtonHighlightedTitleColor;              //@synthesize secondaryButtonHighlightedTitleColor=_secondaryButtonHighlightedTitleColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * tertiaryButtonTitle;                              //@synthesize tertiaryButtonTitle=_tertiaryButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) UIColor * tertiaryButtonTitleColor;                          //@synthesize tertiaryButtonTitleColor=_tertiaryButtonTitleColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * tertiaryButtonHighlightedTitleColor;               //@synthesize tertiaryButtonHighlightedTitleColor=_tertiaryButtonHighlightedTitleColor - In the implementation block
@property (nonatomic,readonly) UIView * customView;                                              //@synthesize customView=_customView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                                          //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithTitle:(id)arg1 titleFont:(id)arg2 titleColor:(id)arg3 titleMaxNumberOfLines:(unsigned long long)arg4 message:(id)arg5 messageFont:(id)arg6 messageColor:(id)arg7 messageMaxNumberOfLines:(unsigned long long)arg8 facepileTitle:(id)arg9 facepileTitleFont:(id)arg10 facepileTitleColor:(id)arg11 facepileTitleMaxNumberOfLines:(unsigned long long)arg12 facepileItems:(id)arg13 facepileItemSize:(unsigned long long)arg14 facepileImageDownloader:(id)arg15 imageItem:(id)arg16 hasDismissButton:(BOOL)arg17 separatorColor:(id)arg18 buttonTitleFont:(id)arg19 buttonLayout:(unsigned long long)arg20 primaryButtonTitle:(id)arg21 primaryButtonTitleColor:(id)arg22 primaryButtonHighlightedTitleColor:(id)arg23 secondaryButtonTitle:(id)arg24 secondaryButtonTitleColor:(id)arg25 secondaryButtonHighlightedTitleColor:(id)arg26 tertiaryButtonTitle:(id)arg27 tertiaryButtonTitleColor:(id)arg28 tertiaryButtonHighlightedTitleColor:(id)arg29 customView:(id)arg30 edgeInsets:(UIEdgeInsets)arg31 backgroundColor:(id)arg32 ;
-(unsigned long long)titleMaxNumberOfLines;
-(UIFont *)buttonTitleFont;
-(BOOL)hasDismissButton;
-(NSString *)primaryButtonTitle;
-(NSString *)secondaryButtonTitle;
-(id)_initWithTitle:(id)arg1 titleFont:(id)arg2 titleColor:(id)arg3 titleMaxNumberOfLines:(unsigned long long)arg4 message:(id)arg5 messageFont:(id)arg6 messageColor:(id)arg7 messageMaxNumberOfLines:(unsigned long long)arg8 facepileTitle:(id)arg9 facepileTitleFont:(id)arg10 facepileTitleColor:(id)arg11 facepileTitleMaxNumberOfLines:(unsigned long long)arg12 facepileItems:(id)arg13 facepileItemSize:(unsigned long long)arg14 facepileImageDownloader:(id)arg15 imageItem:(id)arg16 hasDismissButton:(BOOL)arg17 separatorColor:(id)arg18 buttonTitleFont:(id)arg19 buttonLayout:(unsigned long long)arg20 primaryButtonTitle:(id)arg21 primaryButtonTitleColor:(id)arg22 primaryButtonHighlightedTitleColor:(id)arg23 secondaryButtonTitle:(id)arg24 secondaryButtonTitleColor:(id)arg25 secondaryButtonHighlightedTitleColor:(id)arg26 tertiaryButtonTitle:(id)arg27 tertiaryButtonTitleColor:(id)arg28 tertiaryButtonHighlightedTitleColor:(id)arg29 customView:(id)arg30 edgeInsets:(UIEdgeInsets)arg31 backgroundColor:(id)arg32 ;
-(UIColor *)messageColor;
-(unsigned long long)messageMaxNumberOfLines;
-(NSString *)facepileTitle;
-(UIFont *)facepileTitleFont;
-(UIColor *)facepileTitleColor;
-(unsigned long long)facepileTitleMaxNumberOfLines;
-(NSArray *)facepileItems;
-(unsigned long long)facepileItemSize;
-(FBImageDownloader *)facepileImageDownloader;
-(FBModalDialogViewItem *)imageItem;
-(unsigned long long)buttonLayout;
-(UIColor *)primaryButtonTitleColor;
-(UIColor *)primaryButtonHighlightedTitleColor;
-(UIColor *)secondaryButtonTitleColor;
-(UIColor *)secondaryButtonHighlightedTitleColor;
-(NSString *)tertiaryButtonTitle;
-(UIColor *)tertiaryButtonTitleColor;
-(UIColor *)tertiaryButtonHighlightedTitleColor;
-(UIFont *)messageFont;
-(UIColor *)backgroundColor;
-(NSString *)title;
-(UIEdgeInsets)edgeInsets;
-(UIColor *)separatorColor;
-(NSString *)message;
-(UIView *)customView;
-(UIColor *)titleColor;
-(UIFont *)titleFont;
@end

