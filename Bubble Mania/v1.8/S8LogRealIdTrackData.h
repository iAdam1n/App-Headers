/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/S8LogTrackData.h>

@class NSString;

@interface S8LogRealIdTrackData : S8LogTrackData {

	BOOL _isFunnelStart;
	BOOL _isFBConnected;
	BOOL _isGCConnected;
	BOOL _isOffline;
	NSString* _channel;
	NSString* _viewName;
	NSString* _action;
	NSString* _status;
	NSString* _errorInfo;
	NSString* _successInfo;

}

@property (assign,nonatomic) BOOL isFunnelStart;                  //@synthesize isFunnelStart=_isFunnelStart - In the implementation block
@property (nonatomic,retain) NSString * channel;                  //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) NSString * viewName;                 //@synthesize viewName=_viewName - In the implementation block
@property (nonatomic,retain) NSString * action;                   //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSString * status;                   //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL isFBConnected;                  //@synthesize isFBConnected=_isFBConnected - In the implementation block
@property (assign,nonatomic) BOOL isGCConnected;                  //@synthesize isGCConnected=_isGCConnected - In the implementation block
@property (assign,nonatomic) BOOL isOffline;                      //@synthesize isOffline=_isOffline - In the implementation block
@property (nonatomic,retain) NSString * errorInfo;                //@synthesize errorInfo=_errorInfo - In the implementation block
@property (nonatomic,retain) NSString * successInfo;              //@synthesize successInfo=_successInfo - In the implementation block
-(void)setIsFunnelStart:(BOOL)arg1 ;
-(void)setViewName:(NSString *)arg1 ;
-(NSString *)viewName;
-(NSString *)errorInfo;
-(void)setErrorInfo:(NSString *)arg1 ;
-(BOOL)isFunnelStart;
-(void)setIsFBConnected:(BOOL)arg1 ;
-(void)setIsGCConnected:(BOOL)arg1 ;
-(void)setSuccessInfo:(NSString *)arg1 ;
-(BOOL)isFBConnected;
-(BOOL)isGCConnected;
-(NSString *)successInfo;
-(BOOL)isOffline;
-(void)dealloc;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(void)setChannel:(NSString *)arg1 ;
-(NSString *)channel;
-(void)setIsOffline:(BOOL)arg1 ;
@end

