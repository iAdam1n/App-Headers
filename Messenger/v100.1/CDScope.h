/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface CDScope : NSObject {

	shared_ptr<compactdisk::experimental::Scope>* _scope;

}

@property (nonatomic,readonly) shared_ptr<compactdisk::experimental::Scope>* scope;              //@synthesize scope=_scope - In the implementation block
-(id)initWithScope:(shared_ptr<compactdisk::experimental::Scope>*)arg1 ;
-(void)invalidate;
-(id)initWithUUID:(id)arg1 ;
-(shared_ptr<compactdisk::experimental::Scope>*)scope;
-(id)uuid;
@end
