/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBKVOController, NSString;

@interface _FBKVOInfo : NSObject {

	FBKVOController* _controller;
	NSString* _keyPath;
	unsigned long long _options;
	SEL _action;
	void* _context;
	/*^block*/id _block;
	unsigned char _state;

}
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 action:(SEL)arg5 context:(void*)arg6 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
@end
