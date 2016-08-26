/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TGRemoteControlsClient : NSObject {

	int _clientId;
	/*^block*/id _previous;
	/*^block*/id _next;
	/*^block*/id _play;
	/*^block*/id _pause;

}

@property (nonatomic,readonly) int clientId;                  //@synthesize clientId=_clientId - In the implementation block
@property (nonatomic,copy,readonly) id previous;              //@synthesize previous=_previous - In the implementation block
@property (nonatomic,copy,readonly) id next;                  //@synthesize next=_next - In the implementation block
@property (nonatomic,copy,readonly) id play;                  //@synthesize play=_play - In the implementation block
@property (nonatomic,copy,readonly) id pause;                 //@synthesize pause=_pause - In the implementation block
-(id)initWithId:(int)arg1 previous:(/*^block*/id)arg2 next:(/*^block*/id)arg3 play:(/*^block*/id)arg4 pause:(/*^block*/id)arg5 ;
-(id)next;
-(id)previous;
-(id)pause;
-(int)clientId;
-(id)play;
@end
