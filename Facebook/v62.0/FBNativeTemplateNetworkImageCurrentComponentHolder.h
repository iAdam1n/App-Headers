/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class UIImage, NSString, CKComponent;

@interface FBNativeTemplateNetworkImageCurrentComponentHolder : NSObject {

	BOOL _initialized;
	UIImage* _currentImage;
	NSString* _urlString;
	NSString* _borderColorString;
	NSString* _outsideColorString;
	NSString* _cornerRadiusString;
	NSString* _borderWidthString;
	CKComponent* _currentComponent;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) UIImage * currentImage;              //@synthesize currentImage=_currentImage - In the implementation block
@property (assign) BOOL initialized;                              //@synthesize initialized=_initialized - In the implementation block
@property (assign) UIEdgeInsets insets;                           //@synthesize insets=_insets - In the implementation block
@property (copy) NSString * urlString;                            //@synthesize urlString=_urlString - In the implementation block
@property (copy) NSString * borderColorString;                    //@synthesize borderColorString=_borderColorString - In the implementation block
@property (copy) NSString * outsideColorString;                   //@synthesize outsideColorString=_outsideColorString - In the implementation block
@property (copy) NSString * cornerRadiusString;                   //@synthesize cornerRadiusString=_cornerRadiusString - In the implementation block
@property (copy) NSString * borderWidthString;                    //@synthesize borderWidthString=_borderWidthString - In the implementation block
@property (retain) CKComponent * currentComponent;                //@synthesize currentComponent=_currentComponent - In the implementation block
-(NSString *)borderColorString;
-(void)setBorderColorString:(NSString *)arg1 ;
-(NSString *)outsideColorString;
-(void)setOutsideColorString:(NSString *)arg1 ;
-(NSString *)cornerRadiusString;
-(void)setCornerRadiusString:(NSString *)arg1 ;
-(NSString *)borderWidthString;
-(void)setBorderWidthString:(NSString *)arg1 ;
-(CKComponent *)currentComponent;
-(void)setCurrentComponent:(CKComponent *)arg1 ;
-(UIImage *)currentImage;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setCurrentImage:(UIImage *)arg1 ;
-(BOOL)initialized;
-(void)setUrlString:(NSString *)arg1 ;
-(NSString *)urlString;
-(void)setInitialized:(BOOL)arg1 ;
@end

