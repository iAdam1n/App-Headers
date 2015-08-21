/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MKAnnotation.h>

@class FBMMutableMessage, FBMParticipantNameFormatter, NSString;

@interface MessageAnnotation : NSObject <MKAnnotation> {

	FBMMutableMessage* _message;
	double _latitude;
	double _longitude;
	FBMParticipantNameFormatter* _nameFormatter;

}

@property (nonatomic,readonly) FBMMutableMessage * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) FBMParticipantNameFormatter * nameFormatter;              //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGPoint coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(FBMParticipantNameFormatter *)nameFormatter;
-(void)setNameFormatter:(FBMParticipantNameFormatter *)arg1 ;
-(id)initWithMessage:(id)arg1 nameFormatter:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 ;
-(void)dealloc;
-(NSString *)title;
-(FBMMutableMessage *)message;
-(CGPoint)coordinate;
@end

