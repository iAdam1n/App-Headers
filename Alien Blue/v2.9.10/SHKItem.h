/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, NSURL, UIImage, SHKFile, NSMutableDictionary;

@interface SHKItem : NSObject <NSCoding> {

	BOOL _isMailHTML;
	BOOL _mailShareWithAppSignature;
	int _shareType;
	int _URLContentType;
	NSString* _title;
	NSString* _text;
	NSArray* _tags;
	NSURL* _URL;
	UIImage* _image;
	SHKFile* _file;
	long long _printOutputType;
	NSArray* _mailToRecipients;
	double _mailJPGQuality;
	NSString* _facebookURLSharePictureURI;
	NSString* _facebookURLShareDescription;
	NSArray* _textMessageToRecipients;
	NSMutableDictionary* _custom;
	CGRect _popOverSourceRect;

}

@property (assign,nonatomic) int shareType;                                       //@synthesize shareType=_shareType - In the implementation block
@property (nonatomic,retain) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * text;                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSArray * tags;                                      //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                         //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) int URLContentType;                                  //@synthesize URLContentType=_URLContentType - In the implementation block
@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) SHKFile * file;                                      //@synthesize file=_file - In the implementation block
@property (assign,nonatomic) long long printOutputType;                           //@synthesize printOutputType=_printOutputType - In the implementation block
@property (nonatomic,retain) NSArray * mailToRecipients;                          //@synthesize mailToRecipients=_mailToRecipients - In the implementation block
@property (assign) BOOL isMailHTML;                                               //@synthesize isMailHTML=_isMailHTML - In the implementation block
@property (assign) double mailJPGQuality;                                         //@synthesize mailJPGQuality=_mailJPGQuality - In the implementation block
@property (assign) BOOL mailShareWithAppSignature;                                //@synthesize mailShareWithAppSignature=_mailShareWithAppSignature - In the implementation block
@property (nonatomic,retain) NSString * facebookURLSharePictureURI;               //@synthesize facebookURLSharePictureURI=_facebookURLSharePictureURI - In the implementation block
@property (nonatomic,retain) NSString * facebookURLShareDescription;              //@synthesize facebookURLShareDescription=_facebookURLShareDescription - In the implementation block
@property (nonatomic,retain) NSArray * textMessageToRecipients;                   //@synthesize textMessageToRecipients=_textMessageToRecipients - In the implementation block
@property (assign,nonatomic) CGRect popOverSourceRect;                            //@synthesize popOverSourceRect=_popOverSourceRect - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * custom;                        //@synthesize custom=_custom - In the implementation block
+(id)URL:(id)arg1 title:(id)arg2 ;
+(id)URL:(id)arg1 title:(id)arg2 contentType:(int)arg3 ;
+(id)image:(id)arg1 title:(id)arg2 ;
+(id)fileData:(id)arg1 filename:(id)arg2 title:(id)arg3 ;
+(id)URL:(id)arg1 ;
+(id)image:(id)arg1 ;
+(id)text:(id)arg1 ;
+(id)filePath:(id)arg1 title:(id)arg2 ;
+(id)file:(id)arg1 filename:(id)arg2 mimeType:(id)arg3 title:(id)arg4 ;
-(void)setShareType:(int)arg1 ;
-(long long)printOutputType;
-(NSArray *)mailToRecipients;
-(BOOL)isMailHTML;
-(double)mailJPGQuality;
-(NSString *)facebookURLSharePictureURI;
-(NSString *)facebookURLShareDescription;
-(NSArray *)textMessageToRecipients;
-(CGRect)popOverSourceRect;
-(int)shareType;
-(BOOL)customBoolForSwitchKey:(id)arg1 ;
-(void)setExtensionPropertiesDefaultValues;
-(void)setURLContentType:(int)arg1 ;
-(NSMutableDictionary *)custom;
-(void)setCustom:(NSMutableDictionary *)arg1 ;
-(int)URLContentType;
-(BOOL)mailShareWithAppSignature;
-(id)shareTypeToString:(int)arg1 ;
-(void)convertImageShareToFileShareOfType:(int)arg1 quality:(double)arg2 ;
-(void)setCustomValue:(id)arg1 forKey:(id)arg2 ;
-(id)customValueForKey:(id)arg1 ;
-(void)setPrintOutputType:(long long)arg1 ;
-(void)setMailToRecipients:(NSArray *)arg1 ;
-(void)setIsMailHTML:(BOOL)arg1 ;
-(void)setMailJPGQuality:(double)arg1 ;
-(void)setMailShareWithAppSignature:(BOOL)arg1 ;
-(void)setFacebookURLSharePictureURI:(NSString *)arg1 ;
-(void)setFacebookURLShareDescription:(NSString *)arg1 ;
-(void)setTextMessageToRecipients:(NSArray *)arg1 ;
-(void)setPopOverSourceRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(NSArray *)tags;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setTags:(NSArray *)arg1 ;
-(void)setFile:(SHKFile *)arg1 ;
-(SHKFile *)file;
@end

