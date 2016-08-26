/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <Facebook/FBUIConfig.h>

@class UIColor, NSArray, FBActionBarItem, UIImage, UIFont, NSString;

@interface FBActionBarConfig : FBValueObject <FBUIConfig> {

	BOOL _enablesButtonBackgroundImage;
	BOOL _enablesBackgroundImage;
	BOOL _showSeparator;
	unsigned long long _size;
	unsigned long long _destination;
	long long _maxVisibleItems;
	UIColor* _backgroundColor;
	unsigned long long _regularGlyphSize;
	unsigned long long _largeGlyphSize;
	NSArray* _primaryItems;
	NSArray* _secondaryItems;
	FBActionBarItem* _overflowButtonItem;
	UIImage* _buttonSeparatorImage;
	UIFont* _buttonTitleFont;
	UIEdgeInsets _headerContentEdgeInsets;
	UIEdgeInsets _cardContentEdgeInsets;
	UIEdgeInsets _buttonSeparatorInsets;

}

@property (nonatomic,readonly) unsigned long long size;                                //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long destination;                         //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) long long maxVisibleItems;                              //@synthesize maxVisibleItems=_maxVisibleItems - In the implementation block
@property (nonatomic,readonly) BOOL enablesButtonBackgroundImage;                      //@synthesize enablesButtonBackgroundImage=_enablesButtonBackgroundImage - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL enablesBackgroundImage;                            //@synthesize enablesBackgroundImage=_enablesBackgroundImage - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets headerContentEdgeInsets;                   //@synthesize headerContentEdgeInsets=_headerContentEdgeInsets - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets cardContentEdgeInsets;                     //@synthesize cardContentEdgeInsets=_cardContentEdgeInsets - In the implementation block
@property (nonatomic,readonly) unsigned long long regularGlyphSize;                    //@synthesize regularGlyphSize=_regularGlyphSize - In the implementation block
@property (nonatomic,readonly) unsigned long long largeGlyphSize;                      //@synthesize largeGlyphSize=_largeGlyphSize - In the implementation block
@property (nonatomic,copy,readonly) NSArray * primaryItems;                            //@synthesize primaryItems=_primaryItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * secondaryItems;                          //@synthesize secondaryItems=_secondaryItems - In the implementation block
@property (nonatomic,copy,readonly) FBActionBarItem * overflowButtonItem;              //@synthesize overflowButtonItem=_overflowButtonItem - In the implementation block
@property (nonatomic,readonly) BOOL showSeparator;                                     //@synthesize showSeparator=_showSeparator - In the implementation block
@property (nonatomic,copy,readonly) UIImage * buttonSeparatorImage;                    //@synthesize buttonSeparatorImage=_buttonSeparatorImage - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets buttonSeparatorInsets;                     //@synthesize buttonSeparatorInsets=_buttonSeparatorInsets - In the implementation block
@property (nonatomic,copy,readonly) UIFont * buttonTitleFont;                          //@synthesize buttonTitleFont=_buttonTitleFont - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithSize:(unsigned long long)arg1 destination:(unsigned long long)arg2 maxVisibleItems:(long long)arg3 enablesButtonBackgroundImage:(BOOL)arg4 backgroundColor:(id)arg5 enablesBackgroundImage:(BOOL)arg6 headerContentEdgeInsets:(UIEdgeInsets)arg7 cardContentEdgeInsets:(UIEdgeInsets)arg8 regularGlyphSize:(unsigned long long)arg9 largeGlyphSize:(unsigned long long)arg10 primaryItems:(id)arg11 secondaryItems:(id)arg12 overflowButtonItem:(id)arg13 showSeparator:(BOOL)arg14 buttonSeparatorImage:(id)arg15 buttonSeparatorInsets:(UIEdgeInsets)arg16 buttonTitleFont:(id)arg17 ;
+(Class)viewClass;
-(NSArray *)primaryItems;
-(NSArray *)secondaryItems;
-(FBActionBarItem *)overflowButtonItem;
-(UIEdgeInsets)headerContentEdgeInsets;
-(UIEdgeInsets)cardContentEdgeInsets;
-(unsigned long long)largeGlyphSize;
-(unsigned long long)regularGlyphSize;
-(BOOL)enablesButtonBackgroundImage;
-(UIFont *)buttonTitleFont;
-(UIImage *)buttonSeparatorImage;
-(UIEdgeInsets)buttonSeparatorInsets;
-(long long)maxVisibleItems;
-(id)_initWithSize:(unsigned long long)arg1 destination:(unsigned long long)arg2 maxVisibleItems:(long long)arg3 enablesButtonBackgroundImage:(BOOL)arg4 backgroundColor:(id)arg5 enablesBackgroundImage:(BOOL)arg6 headerContentEdgeInsets:(UIEdgeInsets)arg7 cardContentEdgeInsets:(UIEdgeInsets)arg8 regularGlyphSize:(unsigned long long)arg9 largeGlyphSize:(unsigned long long)arg10 primaryItems:(id)arg11 secondaryItems:(id)arg12 overflowButtonItem:(id)arg13 showSeparator:(BOOL)arg14 buttonSeparatorImage:(id)arg15 buttonSeparatorInsets:(UIEdgeInsets)arg16 buttonTitleFont:(id)arg17 ;
-(BOOL)enablesBackgroundImage;
-(unsigned long long)size;
-(UIColor *)backgroundColor;
-(unsigned long long)destination;
-(BOOL)showSeparator;
@end
