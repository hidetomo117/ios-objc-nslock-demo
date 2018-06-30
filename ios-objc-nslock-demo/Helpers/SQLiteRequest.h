//
//  SQLiteRequest.h
//  ios-objc-nslock-demo
//
//  Created by YukiOkudera on 2018/06/30.
//  Copyright © 2018年 YukiOkudera. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TableModel.h"

@interface SQLiteRequest : NSObject

@property (nonnull, nonatomic) NSString *query;
@property (nullable, nonatomic) NSArray *parameters;
@property (nonatomic) TableModel tableModel;

- (nonnull instancetype)initWithQuery:(nonnull NSString *)query parameters:(nullable NSArray *)parameters tableModel:(TableModel)tableModel;
- (nonnull instancetype)initWithQuery:(nonnull NSString *)query parameters:(nullable NSArray *)parameters;
@end
