/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPIStreamPair.h>

@class NSInputStream, NSOutputStream, NSString;

@interface SKPStreamPair : NSObject <SKPIStreamPair> {

	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;

}

@property (nonatomic,retain) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInputStream:(NSInputStream *)arg1 ;
-(NSOutputStream *)outputStream;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(NSInputStream *)inputStream;
@end
