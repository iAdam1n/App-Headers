/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, UIColor, UIFont, UIImage;

@interface FBUFITheme : NSObject {

	NSDictionary* _titleColors;
	BOOL _useDropShadow;
	UIColor* _separatorColor;
	double _separatorThicknessInPoints;
	UIColor* _countTextColor;
	UIFont* _countTextFont;
	UIImage* _likeButtonIcon;
	UIImage* _likeButtonHighlightedIcon;
	UIImage* _likeButtonSelectedIcon;
	UIImage* _commentButtonIcon;
	UIImage* _commentButtonHighlightedIcon;
	UIImage* _shareButtonIcon;
	UIImage* _shareButtonHighlightedIcon;
	UIColor* _iconNormalStateColor;
	UIColor* _iconHighlightedStateColor;
	unsigned long long _type;
	unsigned long long _dockInputType;

}

@property (nonatomic,readonly) BOOL useDropShadow;                                  //@synthesize useDropShadow=_useDropShadow - In the implementation block
@property (nonatomic,readonly) UIColor * separatorColor;                            //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,readonly) double separatorThicknessInPoints;                   //@synthesize separatorThicknessInPoints=_separatorThicknessInPoints - In the implementation block
@property (nonatomic,readonly) UIColor * countTextColor;                            //@synthesize countTextColor=_countTextColor - In the implementation block
@property (nonatomic,readonly) UIFont * countTextFont;                              //@synthesize countTextFont=_countTextFont - In the implementation block
@property (nonatomic,readonly) UIImage * likeButtonIcon;                            //@synthesize likeButtonIcon=_likeButtonIcon - In the implementation block
@property (nonatomic,readonly) UIImage * likeButtonHighlightedIcon;                 //@synthesize likeButtonHighlightedIcon=_likeButtonHighlightedIcon - In the implementation block
@property (nonatomic,readonly) UIImage * likeButtonSelectedIcon;                    //@synthesize likeButtonSelectedIcon=_likeButtonSelectedIcon - In the implementation block
@property (nonatomic,readonly) UIImage * commentButtonIcon;                         //@synthesize commentButtonIcon=_commentButtonIcon - In the implementation block
@property (nonatomic,readonly) UIImage * commentButtonHighlightedIcon;              //@synthesize commentButtonHighlightedIcon=_commentButtonHighlightedIcon - In the implementation block
@property (nonatomic,readonly) UIImage * shareButtonIcon;                           //@synthesize shareButtonIcon=_shareButtonIcon - In the implementation block
@property (nonatomic,readonly) UIImage * shareButtonHighlightedIcon;                //@synthesize shareButtonHighlightedIcon=_shareButtonHighlightedIcon - In the implementation block
@property (nonatomic,readonly) UIColor * iconNormalStateColor;                      //@synthesize iconNormalStateColor=_iconNormalStateColor - In the implementation block
@property (nonatomic,readonly) UIColor * iconHighlightedStateColor;                 //@synthesize iconHighlightedStateColor=_iconHighlightedStateColor - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long dockInputType;                    //@synthesize dockInputType=_dockInputType - In the implementation block
+(id)themeWithThemeType:(unsigned long long)arg1 ;
-(UIFont *)countTextFont;
-(UIColor *)countTextColor;
-(UIImage *)shareButtonIcon;
-(UIImage *)shareButtonHighlightedIcon;
-(id)titleFontForRenderingStyle:(unsigned long long)arg1 ;
-(UIColor *)iconNormalStateColor;
-(UIColor *)iconHighlightedStateColor;
-(UIImage *)likeButtonIcon;
-(UIImage *)likeButtonHighlightedIcon;
-(UIImage *)likeButtonSelectedIcon;
-(unsigned long long)dockInputType;
-(id)selectedLikeButtonIconForReactionKey:(long long)arg1 reactionDataProvider:(id)arg2 ;
-(id)selectedLikeButtonTextForReactionKey:(long long)arg1 reactionDataProvider:(id)arg2 ;
-(id)selectedLikeButtonColorForReactionKey:(long long)arg1 reactionDataProvider:(id)arg2 ;
-(UIImage *)commentButtonIcon;
-(UIImage *)commentButtonHighlightedIcon;
-(BOOL)useDropShadow;
-(double)separatorThicknessInPoints;
-(id)initWithThemeType:(unsigned long long)arg1 useDropShadow:(BOOL)arg2 titleColors:(id)arg3 separatorColor:(id)arg4 separatorThicknessInPoints:(double)arg5 countTextColor:(id)arg6 countTextFont:(id)arg7 likeButtonIcon:(id)arg8 likeButtonHighlightedIcon:(id)arg9 likeButtonSelectedIcon:(id)arg10 commentButtonIcon:(id)arg11 commentButtonHighlightedIcon:(id)arg12 shareButtonIcon:(id)arg13 shareButtonHighlightedIcon:(id)arg14 iconNormalStateColor:(id)arg15 iconHighlightedStateColor:(id)arg16 dockInputType:(unsigned long long)arg17 ;
-(unsigned long long)type;
-(UIColor *)separatorColor;
-(id)titleColorForControlState:(unsigned long long)arg1 ;
@end
