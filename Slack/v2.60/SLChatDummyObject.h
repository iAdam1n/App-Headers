/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SLKMessageGenerics;
@class NSArray, NSString, UIColor, UIImage;

@interface SLChatDummyObject : NSObject {

	BOOL _showName;
	BOOL _showTimestamp;
	BOOL _showHR;
	BOOL _showDayBar;
	BOOL _pending;
	BOOL _userInteractionEnabled;
	BOOL _showLastReadBar;
	BOOL _isMention;
	BOOL _italic;
	BOOL _gray;
	BOOL _isSelected;
	BOOL _isSlackbot;
	BOOL _personAboveIsSame;
	BOOL _edited;
	NSArray* _links;
	NSString* _name;
	NSString* _text;
	NSString* _when;
	NSString* _ts;
	NSString* _timestamp;
	UIColor* _nameColor;
	id<SLKMessageGenerics> _message;
	UIImage* _iconImage;

}

@property (nonatomic,retain) NSArray * links;                             //@synthesize links=_links - In the implementation block
@property (nonatomic,retain) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * when;                             //@synthesize when=_when - In the implementation block
@property (nonatomic,retain) NSString * ts;                               //@synthesize ts=_ts - In the implementation block
@property (nonatomic,retain) NSString * timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) UIColor * nameColor;                         //@synthesize nameColor=_nameColor - In the implementation block
@property (assign,nonatomic) BOOL showName;                               //@synthesize showName=_showName - In the implementation block
@property (assign,nonatomic) BOOL showTimestamp;                          //@synthesize showTimestamp=_showTimestamp - In the implementation block
@property (assign,nonatomic) BOOL showHR;                                 //@synthesize showHR=_showHR - In the implementation block
@property (assign,nonatomic) BOOL showDayBar;                             //@synthesize showDayBar=_showDayBar - In the implementation block
@property (assign,nonatomic) BOOL pending;                                //@synthesize pending=_pending - In the implementation block
@property (assign,nonatomic) BOOL userInteractionEnabled;                 //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (assign,nonatomic) BOOL showLastReadBar;                        //@synthesize showLastReadBar=_showLastReadBar - In the implementation block
@property (assign,nonatomic) BOOL isMention;                              //@synthesize isMention=_isMention - In the implementation block
@property (assign,nonatomic) BOOL italic;                                 //@synthesize italic=_italic - In the implementation block
@property (assign,nonatomic) BOOL gray;                                   //@synthesize gray=_gray - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                             //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) BOOL isSlackbot;                             //@synthesize isSlackbot=_isSlackbot - In the implementation block
@property (assign,nonatomic) BOOL personAboveIsSame;                      //@synthesize personAboveIsSame=_personAboveIsSame - In the implementation block
@property (nonatomic,retain) id<SLKMessageGenerics> message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                         //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) BOOL edited;                                 //@synthesize edited=_edited - In the implementation block
-(BOOL)isMention;
-(void)setIsMention:(BOOL)arg1 ;
-(BOOL)isSlackbot;
-(void)setNameColor:(UIColor *)arg1 ;
-(void)setShowName:(BOOL)arg1 ;
-(void)setShowTimestamp:(BOOL)arg1 ;
-(void)setShowHR:(BOOL)arg1 ;
-(void)setShowDayBar:(BOOL)arg1 ;
-(void)setShowLastReadBar:(BOOL)arg1 ;
-(void)setIsSlackbot:(BOOL)arg1 ;
-(void)setPersonAboveIsSame:(BOOL)arg1 ;
-(NSString *)ts;
-(void)setTs:(NSString *)arg1 ;
-(UIColor *)nameColor;
-(BOOL)showName;
-(BOOL)showTimestamp;
-(BOOL)showHR;
-(BOOL)showDayBar;
-(BOOL)showLastReadBar;
-(void)setGray:(BOOL)arg1 ;
-(BOOL)personAboveIsSame;
-(void)setIconImage:(UIImage *)arg1 ;
-(BOOL)userInteractionEnabled;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(NSString *)timestamp;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setTimestamp:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isSelected;
-(void)prepareForReuse;
-(id<SLKMessageGenerics>)message;
-(void)setMessage:(id<SLKMessageGenerics>)arg1 ;
-(NSArray *)links;
-(UIImage *)iconImage;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(NSString *)when;
-(void)setWhen:(NSString *)arg1 ;
-(BOOL)pending;
-(BOOL)italic;
-(void)setItalic:(BOOL)arg1 ;
-(BOOL)gray;
-(BOOL)edited;
-(void)setEdited:(BOOL)arg1 ;
-(id)cellView;
-(void)setLinks:(NSArray *)arg1 ;
@end

