/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface Announcement : NSObject {

	BOOL _showsOnPhones;
	BOOL _showsOnPads;
	BOOL _showsImmediately;
	BOOL _showsBanner;
	BOOL _customBannerLinkOpensInSafari;
	BOOL _disallowMarkingAsRead;
	BOOL _link1OpensInSafari;
	BOOL _link2OpensInSafari;
	BOOL _link3OpensInSafari;
	BOOL _commentFeedOpensInSafari;
	long long _ident;
	double _minVersion;
	double _maxVersion;
	NSString* _title;
	NSString* _content;
	NSString* _customBannerTitle;
	NSString* _customBannerLink;
	NSString* _link1Url;
	NSString* _link1Title;
	NSString* _link2Url;
	NSString* _link2Title;
	NSString* _link3Url;
	NSString* _link3Title;
	NSString* _commentFeedUrl;

}

@property (assign) long long ident;                                 //@synthesize ident=_ident - In the implementation block
@property (assign) BOOL showsOnPhones;                              //@synthesize showsOnPhones=_showsOnPhones - In the implementation block
@property (assign) BOOL showsOnPads;                                //@synthesize showsOnPads=_showsOnPads - In the implementation block
@property (assign) double minVersion;                               //@synthesize minVersion=_minVersion - In the implementation block
@property (assign) double maxVersion;                               //@synthesize maxVersion=_maxVersion - In the implementation block
@property (assign) BOOL showsImmediately;                           //@synthesize showsImmediately=_showsImmediately - In the implementation block
@property (assign) BOOL showsBanner;                                //@synthesize showsBanner=_showsBanner - In the implementation block
@property (retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (retain) NSString * content;                              //@synthesize content=_content - In the implementation block
@property (retain) NSString * customBannerTitle;                    //@synthesize customBannerTitle=_customBannerTitle - In the implementation block
@property (retain) NSString * customBannerLink;                     //@synthesize customBannerLink=_customBannerLink - In the implementation block
@property (assign) BOOL customBannerLinkOpensInSafari;              //@synthesize customBannerLinkOpensInSafari=_customBannerLinkOpensInSafari - In the implementation block
@property (assign) BOOL disallowMarkingAsRead;                      //@synthesize disallowMarkingAsRead=_disallowMarkingAsRead - In the implementation block
@property (retain) NSString * link1Url;                             //@synthesize link1Url=_link1Url - In the implementation block
@property (retain) NSString * link1Title;                           //@synthesize link1Title=_link1Title - In the implementation block
@property (assign) BOOL link1OpensInSafari;                         //@synthesize link1OpensInSafari=_link1OpensInSafari - In the implementation block
@property (retain) NSString * link2Url;                             //@synthesize link2Url=_link2Url - In the implementation block
@property (retain) NSString * link2Title;                           //@synthesize link2Title=_link2Title - In the implementation block
@property (assign) BOOL link2OpensInSafari;                         //@synthesize link2OpensInSafari=_link2OpensInSafari - In the implementation block
@property (retain) NSString * link3Url;                             //@synthesize link3Url=_link3Url - In the implementation block
@property (retain) NSString * link3Title;                           //@synthesize link3Title=_link3Title - In the implementation block
@property (assign) BOOL link3OpensInSafari;                         //@synthesize link3OpensInSafari=_link3OpensInSafari - In the implementation block
@property (retain) NSString * commentFeedUrl;                       //@synthesize commentFeedUrl=_commentFeedUrl - In the implementation block
@property (assign) BOOL commentFeedOpensInSafari;                   //@synthesize commentFeedOpensInSafari=_commentFeedOpensInSafari - In the implementation block
@property (readonly) BOOL hasLink1; 
@property (readonly) BOOL hasLink2; 
@property (readonly) BOOL hasLink3; 
@property (readonly) BOOL hasCommentFeed; 
@property (readonly) BOOL shouldShow; 
+(void)checkAnnouncements;
+(void)markLatestAnnouncementAsRead;
+(id)latestAnnouncement;
+(long long)lastViewedAnnouncementIdent;
+(void)fetchAnnouncementOnComplete:(/*^block*/id)arg1 ;
-(void)setIdent:(long long)arg1 ;
-(BOOL)disallowMarkingAsRead;
-(BOOL)hasLink1;
-(NSString *)link1Title;
-(NSString *)link1Url;
-(BOOL)link1OpensInSafari;
-(BOOL)hasLink2;
-(NSString *)link2Title;
-(NSString *)link2Url;
-(BOOL)link2OpensInSafari;
-(BOOL)hasLink3;
-(NSString *)link3Title;
-(NSString *)link3Url;
-(BOOL)link3OpensInSafari;
-(BOOL)hasCommentFeed;
-(NSString *)commentFeedUrl;
-(BOOL)commentFeedOpensInSafari;
-(NSString *)customBannerTitle;
-(NSString *)customBannerLink;
-(BOOL)customBannerLinkOpensInSafari;
-(void)setShowsOnPhones:(BOOL)arg1 ;
-(void)setShowsOnPads:(BOOL)arg1 ;
-(void)setShowsImmediately:(BOOL)arg1 ;
-(void)setMinVersion:(double)arg1 ;
-(void)setMaxVersion:(double)arg1 ;
-(void)setLink1Title:(NSString *)arg1 ;
-(void)setLink1Url:(NSString *)arg1 ;
-(void)setLink1OpensInSafari:(BOOL)arg1 ;
-(void)setLink2Title:(NSString *)arg1 ;
-(void)setLink2Url:(NSString *)arg1 ;
-(void)setLink2OpensInSafari:(BOOL)arg1 ;
-(void)setLink3Title:(NSString *)arg1 ;
-(void)setLink3Url:(NSString *)arg1 ;
-(void)setLink3OpensInSafari:(BOOL)arg1 ;
-(void)setCommentFeedUrl:(NSString *)arg1 ;
-(void)setCommentFeedOpensInSafari:(BOOL)arg1 ;
-(void)setCustomBannerTitle:(NSString *)arg1 ;
-(void)setCustomBannerLink:(NSString *)arg1 ;
-(void)setCustomBannerLinkOpensInSafari:(BOOL)arg1 ;
-(void)setDisallowMarkingAsRead:(BOOL)arg1 ;
-(BOOL)showsOnPads;
-(BOOL)showsOnPhones;
-(double)minVersion;
-(double)maxVersion;
-(BOOL)showsImmediately;
-(long long)ident;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)content;
-(BOOL)shouldShow;
-(void)setContent:(NSString *)arg1 ;
-(BOOL)showsBanner;
-(void)setShowsBanner:(BOOL)arg1 ;
@end
