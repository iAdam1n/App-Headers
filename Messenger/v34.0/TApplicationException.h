/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:09 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/TException.h>

@interface TApplicationException : TException {

	int mType;

}
+(id)exceptionWithType:(int)arg1 reason:(id)arg2 ;
+(id)read:(id)arg1 ;
-(id)initWithType:(int)arg1 reason:(id)arg2 ;
-(void)write:(id)arg1 ;
@end

