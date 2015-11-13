/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSNumber, NSArray, UIColor, SLKImage;

@interface SLKAttachmentDrawParameters : NSObject {

	BOOL _shouldHide;
	BOOL _isImageOnly;
	BOOL _shouldShowTapAreas;
	BOOL _shouldCollapseImage;
	BOOL _shouldDownloadLargeImage;
	BOOL _isImageTooLarge;
	BOOL _shouldShowMore;
	BOOL _shouldHaveShowMoreButton;
	NSString* _tsid;
	NSNumber* _internalId;
	NSString* _fromUrl;
	NSString* _pretext;
	NSString* _thumbUrl;
	double _thumbHeight;
	double _thumbWidth;
	NSString* _serviceIconUrl;
	NSString* _serviceName;
	NSString* _serviceUrl;
	NSString* _authorIconUrl;
	NSString* _authorName;
	NSString* _authorSubname;
	NSString* _authorUrl;
	NSString* _title;
	NSString* _titleUrl;
	NSString* _text;
	NSString* _footer;
	NSString* _timestamp;
	NSArray* _fields;
	NSArray* _actions;
	NSString* _showMoreText;
	NSString* _showMoreButtonText;
	NSString* _showLessButtonText;
	NSString* _imageUrl;
	unsigned long long _imageHeight;
	unsigned long long _imageWidth;
	NSString* _imageBytes;
	UIColor* _color;

}

@property (nonatomic,copy) NSString * tsid;                               //@synthesize tsid=_tsid - In the implementation block
@property (nonatomic,retain) NSNumber * internalId;                       //@synthesize internalId=_internalId - In the implementation block
@property (assign,nonatomic) BOOL shouldHide;                             //@synthesize shouldHide=_shouldHide - In the implementation block
@property (assign,nonatomic) BOOL isImageOnly;                            //@synthesize isImageOnly=_isImageOnly - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTapAreas;                     //@synthesize shouldShowTapAreas=_shouldShowTapAreas - In the implementation block
@property (assign,nonatomic) BOOL shouldCollapseImage;                    //@synthesize shouldCollapseImage=_shouldCollapseImage - In the implementation block
@property (assign,nonatomic) BOOL shouldDownloadLargeImage;               //@synthesize shouldDownloadLargeImage=_shouldDownloadLargeImage - In the implementation block
@property (assign,nonatomic) BOOL isImageTooLarge;                        //@synthesize isImageTooLarge=_isImageTooLarge - In the implementation block
@property (assign,nonatomic) BOOL shouldShowMore;                         //@synthesize shouldShowMore=_shouldShowMore - In the implementation block
@property (nonatomic,copy) NSString * fromUrl;                            //@synthesize fromUrl=_fromUrl - In the implementation block
@property (nonatomic,copy) NSString * pretext;                            //@synthesize pretext=_pretext - In the implementation block
@property (nonatomic,copy) NSString * thumbUrl;                           //@synthesize thumbUrl=_thumbUrl - In the implementation block
@property (nonatomic,readonly) SLKImage * thumbImage; 
@property (assign,nonatomic) double thumbHeight;                          //@synthesize thumbHeight=_thumbHeight - In the implementation block
@property (assign,nonatomic) double thumbWidth;                           //@synthesize thumbWidth=_thumbWidth - In the implementation block
@property (nonatomic,copy) NSString * serviceIconUrl;                     //@synthesize serviceIconUrl=_serviceIconUrl - In the implementation block
@property (nonatomic,readonly) SLKImage * serviceIconImage; 
@property (nonatomic,copy) NSString * serviceName;                        //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * serviceUrl;                         //@synthesize serviceUrl=_serviceUrl - In the implementation block
@property (nonatomic,copy) NSString * authorIconUrl;                      //@synthesize authorIconUrl=_authorIconUrl - In the implementation block
@property (nonatomic,readonly) SLKImage * authorIconImage; 
@property (nonatomic,copy) NSString * authorName;                         //@synthesize authorName=_authorName - In the implementation block
@property (nonatomic,copy) NSString * authorSubname;                      //@synthesize authorSubname=_authorSubname - In the implementation block
@property (nonatomic,copy) NSString * authorUrl;                          //@synthesize authorUrl=_authorUrl - In the implementation block
@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * titleUrl;                           //@synthesize titleUrl=_titleUrl - In the implementation block
@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * footer;                             //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy) NSString * timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSArray * fields;                              //@synthesize fields=_fields - In the implementation block
@property (nonatomic,copy) NSArray * actions;                             //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSString * showMoreText;                       //@synthesize showMoreText=_showMoreText - In the implementation block
@property (nonatomic,copy) NSString * showMoreButtonText;                 //@synthesize showMoreButtonText=_showMoreButtonText - In the implementation block
@property (nonatomic,copy) NSString * showLessButtonText;                 //@synthesize showLessButtonText=_showLessButtonText - In the implementation block
@property (nonatomic,copy) NSString * imageUrl;                           //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,readonly) SLKImage * image; 
@property (assign,nonatomic) unsigned long long imageHeight;              //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) unsigned long long imageWidth;               //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,copy) NSString * imageBytes;                         //@synthesize imageBytes=_imageBytes - In the implementation block
@property (nonatomic,retain) UIColor * color;                             //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL shouldHaveShowMoreButton;               //@synthesize shouldHaveShowMoreButton=_shouldHaveShowMoreButton - In the implementation block
+(id)parametersForAttachment:(id)arg1 ;
-(NSString *)tsid;
-(void)setTsid:(NSString *)arg1 ;
-(BOOL)shouldShowTapAreas;
-(void)setShouldShowTapAreas:(BOOL)arg1 ;
-(BOOL)isImageOnly;
-(NSString *)authorIconUrl;
-(void)setAuthorIconUrl:(NSString *)arg1 ;
-(NSString *)authorSubname;
-(void)setAuthorSubname:(NSString *)arg1 ;
-(NSString *)authorUrl;
-(void)setAuthorUrl:(NSString *)arg1 ;
-(NSString *)fromUrl;
-(void)setFromUrl:(NSString *)arg1 ;
-(NSString *)imageBytes;
-(void)setImageBytes:(NSString *)arg1 ;
-(NSString *)imageUrl;
-(void)setImageUrl:(NSString *)arg1 ;
-(NSNumber *)internalId;
-(void)setInternalId:(NSNumber *)arg1 ;
-(NSString *)pretext;
-(void)setPretext:(NSString *)arg1 ;
-(NSString *)serviceIconUrl;
-(void)setServiceIconUrl:(NSString *)arg1 ;
-(NSString *)serviceUrl;
-(void)setServiceUrl:(NSString *)arg1 ;
-(double)thumbHeight;
-(void)setThumbHeight:(double)arg1 ;
-(NSString *)thumbUrl;
-(void)setThumbUrl:(NSString *)arg1 ;
-(double)thumbWidth;
-(void)setThumbWidth:(double)arg1 ;
-(NSString *)titleUrl;
-(void)setTitleUrl:(NSString *)arg1 ;
-(BOOL)shouldCollapseImage;
-(void)setShouldCollapseImage:(BOOL)arg1 ;
-(BOOL)shouldDownloadLargeImage;
-(void)setShouldDownloadLargeImage:(BOOL)arg1 ;
-(NSString *)showMoreButtonText;
-(void)setShowMoreButtonText:(NSString *)arg1 ;
-(NSString *)showLessButtonText;
-(void)setShowLessButtonText:(NSString *)arg1 ;
-(BOOL)shouldShowMore;
-(void)setShouldShowMore:(BOOL)arg1 ;
-(BOOL)isImageTooLarge;
-(void)setIsImageTooLarge:(BOOL)arg1 ;
-(SLKImage *)authorIconImage;
-(SLKImage *)thumbImage;
-(BOOL)shouldHide;
-(void)setShouldHide:(BOOL)arg1 ;
-(void)setIsImageOnly:(BOOL)arg1 ;
-(BOOL)shouldHaveShowMoreButton;
-(void)setShouldHaveShowMoreButton:(BOOL)arg1 ;
-(NSString *)serviceName;
-(void)setShowMoreText:(NSString *)arg1 ;
-(NSString *)showMoreText;
-(SLKImage *)serviceIconImage;
-(void)setActions:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)timestamp;
-(NSArray *)actions;
-(void)setTimestamp:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(SLKImage *)image;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSArray *)fields;
-(void)setFields:(NSArray *)arg1 ;
-(NSString *)authorName;
-(void)setAuthorName:(NSString *)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(void)setImageWidth:(unsigned long long)arg1 ;
-(void)setImageHeight:(unsigned long long)arg1 ;
-(unsigned long long)imageWidth;
-(unsigned long long)imageHeight;
@end

