/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HTTPRequestDelegate;
@class NSString;

@interface HTTPRequest : NSObject {

	BOOL _cancel;
	BOOL _useGet;
	BOOL _parsePlist;
	int _requestNumber;
	id<HTTPRequestDelegate> _delegate;
	NSString* _requestID;

}

@property (assign,nonatomic) id<HTTPRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL cancel;                                             //@synthesize cancel=_cancel - In the implementation block
@property (assign) BOOL useGet;                                             //@synthesize useGet=_useGet - In the implementation block
@property (assign) BOOL parsePlist;                                         //@synthesize parsePlist=_parsePlist - In the implementation block
@property (retain) NSString * requestID;                                    //@synthesize requestID=_requestID - In the implementation block
@property (assign) int requestNumber;                                       //@synthesize requestNumber=_requestNumber - In the implementation block
-(void)setUseGet:(BOOL)arg1 ;
-(void)setParsePlist:(BOOL)arg1 ;
-(void)makeRequest:(id)arg1 withBody:(id)arg2 ;
-(BOOL)parsePlist;
-(BOOL)useGet;
-(void)finishRequestWithResult:(id)arg1 ;
-(BOOL)cancel;
-(void)setDelegate:(id<HTTPRequestDelegate>)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id<HTTPRequestDelegate>)delegate;
-(void)setCancel:(BOOL)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(NSString *)requestID;
-(int)requestNumber;
-(void)setRequestNumber:(int)arg1 ;
@end

