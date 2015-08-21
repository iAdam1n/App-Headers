/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:23:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/4CADE18B-4AB7-484E-AA99-AF6CAB7B8341/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, IRCChannel, IRCNick, IRCNetwork, NSMutableArray, PLVIRCQueryDetailViewController, NSObject, RACSignal, NSCache, NSDateFormatter, PLVUserPreferences;

@interface IRCQuery : NSObject {

	int _queryType;
	NSString* _name;
	NSString* _password;
	IRCChannel* _channel;
	IRCNick* _nick;
	unsigned long long _unread;
	unsigned long long _unreadMentions;
	id _delegate;
	IRCNetwork* _network;
	NSMutableArray* _events;
	NSString* _inputText;
	PLVIRCQueryDetailViewController* _queryViewController;
	NSObject*<OS_dispatch_queue> _messageQueue;
	RACSignal* _scrollToBottomSignal;
	NSCache* _eventCache;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,readonly) int queryType;                                                           //@synthesize queryType=_queryType - In the implementation block
@property (retain) NSString * name;                                                                     //@synthesize name=_name - In the implementation block
@property (retain) NSString * password;                                                                 //@synthesize password=_password - In the implementation block
@property (setter=setChannel:,nonatomic,retain) IRCChannel * channel;                                   //@synthesize channel=_channel - In the implementation block
@property (setter=setNick:,nonatomic,retain) IRCNick * nick;                                            //@synthesize nick=_nick - In the implementation block
@property (assign,nonatomic) unsigned long long unread;                                                 //@synthesize unread=_unread - In the implementation block
@property (assign) unsigned long long unreadMentions;                                                   //@synthesize unreadMentions=_unreadMentions - In the implementation block
@property (assign) id delegate;                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (__weak) IRCNetwork * network;                                                                //@synthesize network=_network - In the implementation block
@property (retain) NSMutableArray * events;                                                             //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSString * inputText;                                                      //@synthesize inputText=_inputText - In the implementation block
@property (assign,nonatomic,__weak) PLVIRCQueryDetailViewController * queryViewController;              //@synthesize queryViewController=_queryViewController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> messageQueue;                                 //@synthesize messageQueue=_messageQueue - In the implementation block
@property (nonatomic,readonly) PLVUserPreferences * userPreferences; 
@property (nonatomic,readonly) RACSignal * scrollToBottomSignal;                                        //@synthesize scrollToBottomSignal=_scrollToBottomSignal - In the implementation block
@property (nonatomic,retain) NSCache * eventCache;                                                      //@synthesize eventCache=_eventCache - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                                           //@synthesize dateFormatter=_dateFormatter - In the implementation block
+(id)queryWithName:(id)arg1 network:(id)arg2 ;
+(id)queryWithChannel:(id)arg1 ;
+(id)queryWithNick:(id)arg1 ;
-(id)initWithName:(id)arg1 network:(id)arg2 queryType:(int)arg3 ;
-(IRCNick *)nick;
-(void)setNick:(IRCNick *)arg1 ;
-(PLVUserPreferences *)userPreferences;
-(BOOL)isChannel;
-(void)topicChanged:(BOOL)arg1 ;
-(PLVIRCQueryDetailViewController *)queryViewController;
-(void)resetCache;
-(BOOL)addMessageEvent:(id)arg1 ;
-(void)addEvent:(id)arg1 date:(id)arg2 ;
-(BOOL)hasNick:(id)arg1 ;
-(id)themeVariant;
-(id)attributedStringForIndex:(long long)arg1 ;
-(unsigned long long)unreadMentions;
-(void)noSuchNick:(id)arg1 ;
-(void)receiveEvent:(id)arg1 ;
-(void)nickEvent:(id)arg1 ;
-(void)setInputText:(NSString *)arg1 ;
-(void)setQueryViewController:(PLVIRCQueryDetailViewController *)arg1 ;
-(NSString *)inputText;
-(void)setEventCache:(NSCache *)arg1 ;
-(RACSignal *)scrollToBottomSignal;
-(NSCache *)eventCache;
-(void)didLeave:(id)arg1 ;
-(void)modeEvent:(id)arg1 ;
-(void)joinedEvent:(id)arg1 ;
-(void)partedEvent:(id)arg1 ;
-(void)kickedEvent:(id)arg1 ;
-(void)setUnreadMentions:(unsigned long long)arg1 ;
-(id)attributedStringForNick:(id)arg1 ;
-(BOOL)hasNick:(id)arg1 nicks:(id)arg2 queryName:(id)arg3 ourNickname:(id)arg4 ;
-(id)attributedStringForChannel:(id)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)addEvent:(id)arg1 ;
-(NSMutableArray *)events;
-(NSDateFormatter *)dateFormatter;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setNetwork:(IRCNetwork *)arg1 ;
-(IRCNetwork *)network;
-(void)setMessageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)messageQueue;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(BOOL)isAvailable;
-(int)queryType;
-(unsigned long long)unread;
-(void)setUnread:(unsigned long long)arg1 ;
-(void)setChannel:(IRCChannel *)arg1 ;
-(IRCChannel *)channel;
@end
