const input = require("prompt-sync")();

function inputExpenses(
  month,
  loanPayment,
  insurance,
  gas,
  oil,
  tires,
  maintenance
) {
  console.log("Expenses month       :  " + month.value);
  loanPayment.value = Number(input("Enter a Loan Payment : $"));
  insurance.value = Number(input("Enter a Insurance    : $"));
  gas.value = Number(input("Enter a Gas          : $"));
  oil.value = Number(input("Enter a Oil          : $"));
  tires.value = Number(input("Enter a Tires        : $"));
  maintenance.value = Number(input("Enter a Maintenance  : $"));
}

function processExpenses(
  loanPayment,
  insurance,
  gas,
  oil,
  tires,
  maintenance,
  totalMonthly,
  totalAnnual
) {
  totalMonthly.value =
    loanPayment.value +
    insurance.value +
    gas.value +
    oil.value +
    tires.value +
    maintenance.value;
  totalAnnual.value = totalAnnual.value + totalMonthly.value;
}

function outputMonthlyExpenses(month, totalMonthly) {
  console.log("Total Monthly Expenses : $" + totalMonthly.value);
  month.value = month.value + 1;
  totalMonthly.value = 0;
}

function outputAnnualExpenses(totalAnnual) {
  console.log("Total Annual Expenses : $" + totalAnnual.value);
}

function main() {
  let month = {
    value: 0,
  };
  let loanPayment = {
    value: 0,
  };
  let insurance = {
    value: 0,
  };
  let gas = {
    value: 0,
  };
  let oil = {
    value: 0,
  };
  let tires = {
    value: 0,
  };
  let maintenance = {
    value: 0,
  };
  let totalMonthly = {
    value: 0,
  };
  let totalAnnual = {
    value: 0,
  };

  inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
  processExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly,
    totalAnnual
  );
  outputMonthlyExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly
  );

  inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
  processExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly,
    totalAnnual
  );
  outputMonthlyExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly
  );

  inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
  processExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly,
    totalAnnual
  );
  outputMonthlyExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly
  );

  inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
  processExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly,
    totalAnnual
  );
  outputMonthlyExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly
  );

  inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
  processExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly,
    totalAnnual
  );
  outputMonthlyExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly
  );

  inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
  processExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly,
    totalAnnual
  );
  outputMonthlyExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly
  );

  inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
  processExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly,
    totalAnnual
  );
  outputMonthlyExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly
  );

  inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
  processExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly,
    totalAnnual
  );
  outputMonthlyExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly
  );

  inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
  processExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly,
    totalAnnual
  );
  outputMonthlyExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly
  );

  inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
  processExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly,
    totalAnnual
  );
  outputMonthlyExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly
  );

  inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
  processExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly,
    totalAnnual
  );
  outputMonthlyExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly
  );

  inputExpenses(month, loanPayment, insurance, gas, oil, tires, maintenance);
  processExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly,
    totalAnnual
  );
  outputMonthlyExpenses(
    month,
    loanPayment,
    insurance,
    gas,
    oil,
    tires,
    maintenance,
    totalMonthly
  );

  outputAnnualExpenses(totalAnnual);
}

// Entry Point
main();
