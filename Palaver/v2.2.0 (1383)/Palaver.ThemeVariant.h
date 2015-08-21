/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:23:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/4CADE18B-4AB7-484E-AA99-AF6CAB7B8341/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIColor;

@interface Palaver.ThemeVariant : NSObject {

	 messageBackgroundColor;
	 noticeBackgroundColor;
	 mentionBackgroundColor;
	 messageTextColor;
	 actionTextColor;
	 statusTextColor;
	 timestampColor;
	 interfaceTintColor;
	 historyTintColor;
	 ourNickColor;
	 nickColors;

}

@property (readonly,nonatomic) UIColor * messageBackgroundColor; 
@property (readonly,nonatomic) UIColor * noticeBackgroundColor; 
@property (readonly,nonatomic) UIColor * mentionBackgroundColor; 
@property (readonly,nonatomic) UIColor * messageTextColor; 
@property (readonly,nonatomic) UIColor * actionTextColor; 
@property (readonly,nonatomic) UIColor * statusTextColor; 
@property (readonly,nonatomic) UIColor * timestampColor; 
@property (readonly,nonatomic) UIColor * interfaceTintColor; 
@property (readonly,nonatomic) UIColor * historyTintColor; 
@property (readonly,nonatomic) UIColor * ourNickColor; 
@property (readonly,nonatomic) id nickColors; 
-(UIColor *)messageBackgroundColor;
-(UIColor *)mentionBackgroundColor;
-(UIColor *)noticeBackgroundColor;
-(UIColor *)messageTextColor;
-(UIColor *)timestampColor;
-(UIColor *)historyTintColor;
-(UIColor *)actionTextColor;
-(UIColor *)interfaceTintColor;
-(id)initWithThemeStyle:(id)arg1 ;
-(UIColor *)ourNickColor;
-(id)nickColors;
-(id)initWithMessageBackgroundColor:(id)arg1 noticeBackgroundColor:(id)arg2 mentionBackgroundColor:(id)arg3 messageTextColor:(id)arg4 actionTextColor:(id)arg5 statusTextColor:(id)arg6 timestampColor:(id)arg7 interfaceTintColor:(id)arg8 historyTintColor:(id)arg9 ourNickColor:(id)arg10 nickColors:(id)arg11 ;
-(UIColor *)statusTextColor;
-(id)init;
@end
