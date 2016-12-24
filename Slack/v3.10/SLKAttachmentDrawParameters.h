/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Slack/Slack-Structs.h>
@class NSString, NSNumber, NSArray, UIColor, SLKDependencies, SLKImage;

@interface SLKAttachmentDrawParameters : NSObject {

	BOOL _isUnfurl;
	BOOL _hasImage;
	BOOL _isImageOnly;
	BOOL _isEmpty;
	BOOL _shouldHide;
	BOOL _shouldShowTapAreas;
	BOOL _shouldCollapseImage;
	BOOL _shouldDownloadLargeImage;
	BOOL _isImageTooLarge;
	BOOL _shouldShowMore;
	BOOL _hasUnsupportedActions;
	BOOL _forceLineColor;
	BOOL _messageHasText;
	BOOL _shouldHaveShowMoreButton;
	NSString* _tsid;
	NSNumber* _internalId;
	NSString* _callbackId;
	NSArray* _markdownIn;
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
	NSString* _footerIconUrl;
	NSArray* _fields;
	NSArray* _actions;
	NSArray* _legacyActions;
	NSString* _showMoreText;
	NSString* _showMoreButtonText;
	NSString* _showLessButtonText;
	NSString* _imageUrl;
	unsigned long long _imageHeight;
	unsigned long long _imageWidth;
	NSString* _imageBytes;
	UIColor* _color;
	SLKDependencies* _dependencies;
	unsigned long long _drawingOrder;

}

@property (nonatomic,copy) NSString * tsid;                                      //@synthesize tsid=_tsid - In the implementation block
@property (nonatomic,copy) NSNumber * internalId;                                //@synthesize internalId=_internalId - In the implementation block
@property (nonatomic,copy) NSString * callbackId;                                //@synthesize callbackId=_callbackId - In the implementation block
@property (assign,nonatomic) BOOL isUnfurl;                                      //@synthesize isUnfurl=_isUnfurl - In the implementation block
@property (nonatomic,copy) NSArray * markdownIn;                                 //@synthesize markdownIn=_markdownIn - In the implementation block
@property (assign,nonatomic) BOOL hasImage;                                      //@synthesize hasImage=_hasImage - In the implementation block
@property (assign,nonatomic) BOOL isImageOnly;                                   //@synthesize isImageOnly=_isImageOnly - In the implementation block
@property (assign,nonatomic) BOOL isImageTooLarge;                               //@synthesize isImageTooLarge=_isImageTooLarge - In the implementation block
@property (assign,nonatomic) BOOL isEmpty;                                       //@synthesize isEmpty=_isEmpty - In the implementation block
@property (assign,nonatomic) BOOL shouldHide;                                    //@synthesize shouldHide=_shouldHide - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTapAreas;                            //@synthesize shouldShowTapAreas=_shouldShowTapAreas - In the implementation block
@property (assign,nonatomic) BOOL shouldCollapseImage;                           //@synthesize shouldCollapseImage=_shouldCollapseImage - In the implementation block
@property (assign,nonatomic) BOOL shouldDownloadLargeImage;                      //@synthesize shouldDownloadLargeImage=_shouldDownloadLargeImage - In the implementation block
@property (assign,nonatomic) BOOL shouldShowMore;                                //@synthesize shouldShowMore=_shouldShowMore - In the implementation block
@property (assign,nonatomic) BOOL hasUnsupportedActions;                         //@synthesize hasUnsupportedActions=_hasUnsupportedActions - In the implementation block
@property (assign,nonatomic) BOOL shouldHaveShowMoreButton;                      //@synthesize shouldHaveShowMoreButton=_shouldHaveShowMoreButton - In the implementation block
@property (nonatomic,copy) NSString * fromUrl;                                   //@synthesize fromUrl=_fromUrl - In the implementation block
@property (nonatomic,copy) NSString * pretext;                                   //@synthesize pretext=_pretext - In the implementation block
@property (nonatomic,copy) NSString * thumbUrl;                                  //@synthesize thumbUrl=_thumbUrl - In the implementation block
@property (assign,nonatomic) double thumbHeight;                                 //@synthesize thumbHeight=_thumbHeight - In the implementation block
@property (assign,nonatomic) double thumbWidth;                                  //@synthesize thumbWidth=_thumbWidth - In the implementation block
@property (nonatomic,copy) NSString * serviceIconUrl;                            //@synthesize serviceIconUrl=_serviceIconUrl - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * serviceUrl;                                //@synthesize serviceUrl=_serviceUrl - In the implementation block
@property (nonatomic,copy) NSString * authorIconUrl;                             //@synthesize authorIconUrl=_authorIconUrl - In the implementation block
@property (nonatomic,copy) NSString * authorName;                                //@synthesize authorName=_authorName - In the implementation block
@property (nonatomic,copy) NSString * authorSubname;                             //@synthesize authorSubname=_authorSubname - In the implementation block
@property (nonatomic,copy) NSString * authorUrl;                                 //@synthesize authorUrl=_authorUrl - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * titleUrl;                                  //@synthesize titleUrl=_titleUrl - In the implementation block
@property (nonatomic,copy) NSString * text;                                      //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * footer;                                    //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy) NSString * footerIconUrl;                             //@synthesize footerIconUrl=_footerIconUrl - In the implementation block
@property (nonatomic,copy) NSArray * fields;                                     //@synthesize fields=_fields - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                    //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSArray * legacyActions;                              //@synthesize legacyActions=_legacyActions - In the implementation block
@property (nonatomic,copy) NSString * showMoreText;                              //@synthesize showMoreText=_showMoreText - In the implementation block
@property (nonatomic,copy) NSString * showMoreButtonText;                        //@synthesize showMoreButtonText=_showMoreButtonText - In the implementation block
@property (nonatomic,copy) NSString * showLessButtonText;                        //@synthesize showLessButtonText=_showLessButtonText - In the implementation block
@property (nonatomic,copy) NSString * imageUrl;                                  //@synthesize imageUrl=_imageUrl - In the implementation block
@property (assign,nonatomic) unsigned long long imageHeight;                     //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) unsigned long long imageWidth;                      //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,copy) NSString * imageBytes;                                //@synthesize imageBytes=_imageBytes - In the implementation block
@property (nonatomic,copy) UIColor * color;                                      //@synthesize color=_color - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,readonly) SLKImage * thumbImage; 
@property (nonatomic,readonly) SLKImage * serviceIconImage; 
@property (nonatomic,readonly) SLKImage * authorIconImage; 
@property (nonatomic,readonly) SLKImage * footerIconImage; 
@property (nonatomic,readonly) SLKImage * image; 
@property (assign,nonatomic) BOOL forceLineColor;                                //@synthesize forceLineColor=_forceLineColor - In the implementation block
@property (assign,nonatomic) unsigned long long drawingOrder;                    //@synthesize drawingOrder=_drawingOrder - In the implementation block
@property (assign,nonatomic) BOOL messageHasText;                                //@synthesize messageHasText=_messageHasText - In the implementation block
+(id)parametersForAttachment:(id)arg1 dependencies:(id)arg2 ;
+(id)parametersForAndMoreAttachment:(unsigned long long)arg1 dependencies:(id)arg2 ;
+(id)formatFooterDate:(id)arg1 ;
-(void)setTsid:(NSString *)arg1 ;
-(void)setShouldShowTapAreas:(BOOL)arg1 ;
-(void)setMessageHasText:(BOOL)arg1 ;
-(void)setDrawingOrder:(unsigned long long)arg1 ;
-(void)setForceLineColor:(BOOL)arg1 ;
-(void)setInternalId:(NSNumber *)arg1 ;
-(NSString *)callbackId;
-(void)setCallbackId:(NSString *)arg1 ;
-(void)setAuthorIconUrl:(NSString *)arg1 ;
-(void)setAuthorSubname:(NSString *)arg1 ;
-(void)setAuthorUrl:(NSString *)arg1 ;
-(void)setFooterIconUrl:(NSString *)arg1 ;
-(void)setFromUrl:(NSString *)arg1 ;
-(void)setImageBytes:(NSString *)arg1 ;
-(void)setPretext:(NSString *)arg1 ;
-(void)setServiceIconUrl:(NSString *)arg1 ;
-(NSString *)serviceUrl;
-(void)setServiceUrl:(NSString *)arg1 ;
-(double)thumbHeight;
-(void)setThumbHeight:(double)arg1 ;
-(void)setThumbUrl:(NSString *)arg1 ;
-(double)thumbWidth;
-(void)setThumbWidth:(double)arg1 ;
-(void)setTitleUrl:(NSString *)arg1 ;
-(void)setShouldCollapseImage:(BOOL)arg1 ;
-(void)setShouldDownloadLargeImage:(BOOL)arg1 ;
-(void)setShowMoreButtonText:(NSString *)arg1 ;
-(void)setShowLessButtonText:(NSString *)arg1 ;
-(void)setShouldShowMore:(BOOL)arg1 ;
-(void)setMarkdownIn:(NSArray *)arg1 ;
-(void)setIsImageTooLarge:(BOOL)arg1 ;
-(BOOL)hasImage:(id)arg1 ;
-(BOOL)isImageOnly:(id)arg1 ;
-(BOOL)hasSupportedActions:(id)arg1 ;
-(void)setIsUnfurl:(BOOL)arg1 ;
-(void)setShouldHide:(BOOL)arg1 ;
-(void)setHasImage:(BOOL)arg1 ;
-(void)setIsImageOnly:(BOOL)arg1 ;
-(void)setIsEmpty:(BOOL)arg1 ;
-(BOOL)hasUnsupportedActions:(id)arg1 ;
-(void)setHasUnsupportedActions:(BOOL)arg1 ;
-(NSArray *)legacyActions;
-(void)setLegacyActions:(NSArray *)arg1 ;
-(BOOL)messageHasText;
-(BOOL)shouldHaveShowMoreButton;
-(void)setShouldHaveShowMoreButton:(BOOL)arg1 ;
-(void)setImageUrl:(NSString *)arg1 ;
-(BOOL)shouldShowTapAreas;
-(NSString *)authorSubname;
-(BOOL)isUnfurl;
-(id)authorStringAndSubtitleRange:(NSRange*)arg1 ;
-(NSNumber *)internalId;
-(NSArray *)markdownIn;
-(BOOL)isImageOnly;
-(BOOL)shouldHide;
-(BOOL)shouldCollapseImage;
-(BOOL)shouldDownloadLargeImage;
-(BOOL)isImageTooLarge;
-(BOOL)shouldShowMore;
-(BOOL)hasUnsupportedActions;
-(NSString *)fromUrl;
-(NSString *)pretext;
-(NSString *)thumbUrl;
-(SLKImage *)thumbImage;
-(NSString *)serviceIconUrl;
-(NSString *)authorIconUrl;
-(SLKImage *)authorIconImage;
-(NSString *)authorUrl;
-(NSString *)titleUrl;
-(NSString *)footerIconUrl;
-(SLKImage *)footerIconImage;
-(NSString *)showMoreButtonText;
-(NSString *)showLessButtonText;
-(NSString *)imageUrl;
-(BOOL)forceLineColor;
-(unsigned long long)drawingOrder;
-(NSString *)tsid;
-(NSString *)imageBytes;
-(void)setActions:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSArray *)actions;
-(NSString *)title;
-(SLKImage *)image;
-(BOOL)isEmpty;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(BOOL)hasImage;
-(id)accessibilityLabel;
-(void)setImageWidth:(unsigned long long)arg1 ;
-(void)setImageHeight:(unsigned long long)arg1 ;
-(unsigned long long)imageWidth;
-(unsigned long long)imageHeight;
-(void)setShowMoreText:(NSString *)arg1 ;
-(NSString *)showMoreText;
-(id)initWithDependencies:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(SLKImage *)serviceIconImage;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(NSString *)authorName;
-(void)setAuthorName:(NSString *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(BOOL)isEmpty:(id)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(void)setFields:(NSArray *)arg1 ;
-(NSArray *)fields;
@end
